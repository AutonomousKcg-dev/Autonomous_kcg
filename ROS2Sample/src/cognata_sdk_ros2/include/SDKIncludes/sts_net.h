////////////////////////////////////////////////////////////////////////////////
/*
 sts_net.h - v0.07 - public domain
 written 2017 by Sebastian Steinhauer

  VERSION HISTORY
    0.07 (2017-02-24) added checks for a valid socket in every function
                      return 0 for an empty socket set
    0.06 (2017-01-14) fixed warnings when compiling on Windows 64-bit
    0.05 (2017-01-12) added sts_net_is_socket_valid()
                      changed sts_net_send() to const data
    0.04 (2016-05-20) made sts_net_reset_socket public
    0.03 (2016-05-04) fixed timeout in sts_net_check_socket_set
    0.02 (2016-05-03) fixed sts_net_open_socket to work without warnings in Windows
                      removed sts_net_resolve_host and sts_net_address_t
    0.01 (2016-05-01) initial version

  LICENSE
    Public domain. See "unlicense" statement at the end of this file.

  ABOUT
    A simple BSD socket wrapper.

  REMARKS
    The packet API is still work in progress.

*/
////////////////////////////////////////////////////////////////////////////////
#ifndef __INCLUDED__STS_NET_H__
#define __INCLUDED__STS_NET_H__


#ifndef STS_NET_SET_SOCKETS
// define a bigger default if needed
// this is the maximum amount of sockets you can keep in a socket set
#define STS_NET_SET_SOCKETS   32
#endif // STS_NET_SET_SOCKETS

#ifndef STS_NET_BACKLOG
// amount of waiting connections for a server socket
#define STS_NET_BACKLOG       2
#endif // STS_NET_BACKLOG

#ifndef STS_NET_NO_PACKETS
#ifndef STS_NET_PACKET_SIZE
// the biggest possible size for a packet
// note, that this size is already bigger then any MTU
#define STS_NET_PACKET_SIZE   2048
#endif // STS_NET_PACKET_SIZE
#endif // STS_NET_NO_PACKETS


////////////////////////////////////////////////////////////////////////////////
//
//    Structures
//
typedef struct {
  int   fd;             // socket file descriptor
  int   ready;          // flag if this socket is ready or not
  int   server;         // flag indicating if it is a server socket
#ifndef STS_NET_NO_PACKETS
  int   received;       // number of bytes currently received
  int   packet_length;  // the packet size which is requested (-1 if it is still receiving the first 2 bytes)
  char  data[STS_NET_PACKET_SIZE];  // buffer for the incoming packet
#endif // STS_NET_NO_PACKETS
} sts_net_socket_t;


typedef struct {
  sts_net_socket_t* sockets[STS_NET_SET_SOCKETS];
} sts_net_set_t;


// REMARK: most functions return 0 on success and -1 on error. You can get a more verbose error message
// from sts_net_get_last_error. Functions which behave differently are the sts_net packet api and sts_net_check_socket_set.


////////////////////////////////////////////////////////////////////////////////
//
//    General API
//
// Get the last error from sts_net (can be called even before sts_net_init)
const char* sts_net_get_last_error();

// Initialized the sts_net library. You have to call this before any other function (except sts_net_get_last_error)
int sts_net_init();

// Shutdown the sts_net library.
void sts_net_shutdown();


////////////////////////////////////////////////////////////////////////////////
//
//    Low-Level Socket API
//
// Reset a socket (clears the structure).
// THIS WILL NOT CLOSE the socket. It's ment to "clear" the socket structure.
void sts_net_reset_socket(sts_net_socket_t* socket);

// Check if the socket structure contains a "valid" socket.
int sts_net_is_socket_valid(sts_net_socket_t* socket);

// Open a (TCP) socket. If you provide "host" sts_net will try to connect to a remove host.
// Pass NULL for host and you'll have a server socket.
int sts_net_open_socket(sts_net_socket_t* socket, const char* host, const char* service);

// Closes the socket.
void sts_net_close_socket(sts_net_socket_t* socket);

// Try to accept a connection from the given server socket.
int sts_net_accept_socket(sts_net_socket_t* listen_socket, sts_net_socket_t* remote_socket);

// Send data to the socket.
int sts_net_send(sts_net_socket_t* socket, const void* data, int length);

// Receive data from the socket.
// NOTE: this call will block if the socket is not ready (meaning there's no data to receive).
int sts_net_recv(sts_net_socket_t* socket, void* data, int length);

// Initialized a socket set.
void sts_net_init_socket_set(sts_net_set_t* set);

// Add a socket to the socket set.
int sts_net_add_socket_to_set(sts_net_socket_t* socket, sts_net_set_t* set);

// Remove a socket from the socket set. You have to remove the socket from a set manually.
// sts_net_close_socket WILL NOT DO THAT!
int sts_net_remove_socket_from_set(sts_net_socket_t* socket, sts_net_set_t* set);

// Checks for activity on all sockets in the given socket set. If you want to peek for events
// pass 0.0f to the timeout.
// All sockets will have set the ready property to non-zero if you can read data from it,
// or can accept connections.
//  returns:
//    -1  on errors
//     0  if there was no activity
//    >0  amount of sockets with activity
int sts_net_check_socket_set(sts_net_set_t* set, const float timeout);


////////////////////////////////////////////////////////////////////////////////
//
//   Packet API
//
//  Packets are an "high-level" approach to sending and receiving data.
//  sts_net will prefix every packet with two bytes to indicate the size of the incoming data.
//  You should create a socket set add the desired sockets to the set and call sts_net_check_socket_set regurarely.
//
//  sts_net_socket_set_t  client_set;
//  sts_net_socket_t      clients[NUM_CLIENTS];
//
//  ... some code here...
//
//  if (sts_net_check_socket_set(client_set, 0.0f) > 0) {
//    for (i = 0; i < NUM_CLIENTS; ++i) {
//      if (sts_net_refill_packet_data(clients[i]) < 0) {
//        ...error handling...
//      }
//      while (sts_net_receive_packet(clients[i]) {
//        ...use clients[i].data and clients[i].packet_length...
//        sts_net_drop_packet(clients[i]) // drop packet data
//      }
//    }
//  }
//
#ifndef STS_NET_NO_PACKETS
// try to "refill" the internal packet buffer with data
// note that the socket has to be "ready" so use it in conjunction with a socket set
// returns:
//  -1  on errors
//   0  if there was no data
//   1  added some bytes of new packet data
int sts_net_refill_packet_data(sts_net_socket_t* socket);

// tries to "decode" the next packet in the stream
// returns 0 when there's no packet read, non-zero if you can use socket->data and socket->packet_length
int sts_net_receive_packet(sts_net_socket_t* socket);

// drops the packet after you used it
void sts_net_drop_packet(sts_net_socket_t* socket);
#endif // STS_NET_NO_PACKETS
#endif // __INCLUDED__STS_NET_H__


////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
////
////    IMPLEMENTATION
////
////

//// On Windows 64-bit, almost all socket functions use the type SOCKET
//// to operate, but it's safe to cast it down to int, because handles
//// can't get bigger then 2^24 on Windows...so I don't know why SOCKET is 2^64 ;)
//// https://msdn.microsoft.com/en-us/library/ms724485(VS.85).aspx

#ifdef STS_NET_IMPLEMENTATION

#include <string.h>   // NULL and possibly memcpy, memset

#ifdef _WIN32
#include <WinSock2.h>
#include <Ws2tcpip.h>
typedef int socklen_t;
#pragma comment(lib, "Ws2_32.lib")
#else
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/select.h>
#include <unistd.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#define INVALID_SOCKET    -1
#define SOCKET_ERROR      -1
#define closesocket(fd)   close(fd)
#endif


#ifndef sts__memcpy
#define sts__memcpy     memcpy
#endif // sts__memcpy
#ifndef sts__memset
#define sts__memset     memset
#endif // sts__memset


static const char* sts_net__error_message = "";


static int sts_net__set_error(const char* message) {
  sts_net__error_message = message;
  return -1;
}


void sts_net_reset_socket(sts_net_socket_t* socket) {
  socket->fd = INVALID_SOCKET;
  socket->ready = 0;
  socket->server = 0;
#ifndef STS_NET_NO_PACKETS
  socket->received = 0;
  socket->packet_length = -1;
#endif // STS_NET_NO_PACKETS
}


int sts_net_is_socket_valid(sts_net_socket_t* socket) {
  return socket->fd != INVALID_SOCKET;
}


const char *sts_net_get_last_error() {
  return sts_net__error_message;
}


int sts_net_init() {
  #ifdef _WIN32
    WSADATA wsa_data;
    if (WSAStartup(MAKEWORD(2, 2), &wsa_data) != 0) {
      return sts_net__set_error("Windows Sockets failed to start");
    }
    return 0;
  #else
    return 0;
  #endif // _WIN32
}


void sts_net_shutdown() {
  #ifdef _WIN32
    WSACleanup();
  #endif // _WIN32
}


int sts_net_open_socket(sts_net_socket_t* sock, const char* host, const char* service) {
  struct addrinfo     hints;
  struct addrinfo     *res = NULL, *r = NULL;
  int                 fd = INVALID_SOCKET;

  sts_net_reset_socket(sock);
  sts__memset(&hints, 0, sizeof(hints));
  hints.ai_family = AF_INET;
  hints.ai_socktype = SOCK_STREAM;

  if (host != NULL) {
    // try to connect to remote host
    if (getaddrinfo(host, service, &hints, &res) != 0) return sts_net__set_error("Cannot resolve hostname");
    for (r = res; r; r = r->ai_next) {
      fd = (int)socket(r->ai_family, r->ai_socktype, r->ai_protocol);
      if (fd == INVALID_SOCKET) continue;
      if (connect(fd, r->ai_addr, (socklen_t)r->ai_addrlen) == 0) break;
      closesocket(fd);
    }
    freeaddrinfo(res);
    if (!r) return sts_net__set_error("Cannot connect to host");
    sock->fd = fd;
  } else {
    // listen for connection (start server)
    hints.ai_flags = AI_PASSIVE;
    if (getaddrinfo(NULL, service, &hints, &res) != 0) return sts_net__set_error("Cannot resolve hostname");
    fd = (int)socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (fd == INVALID_SOCKET) {
      freeaddrinfo(res);
      return sts_net__set_error("Could not create socket");
    }
#ifndef _WIN32
    {
      int yes = 1;
      setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, (char*)&yes, sizeof(yes));
    }
#endif // _WIN32
    if (bind(fd, res->ai_addr, (socklen_t)res->ai_addrlen) == SOCKET_ERROR) {
      freeaddrinfo(res);
      closesocket(fd);
      return sts_net__set_error("Could not bind to port");
    }
    freeaddrinfo(res);
    if (listen(fd, STS_NET_BACKLOG) == SOCKET_ERROR) {
      closesocket(fd);
      return sts_net__set_error("Could not listen to socket");
    }
    sock->server = 1;
    sock->fd = fd;
  }
  return 0;
}


void sts_net_close_socket(sts_net_socket_t* socket) {
  if (socket->fd != INVALID_SOCKET) closesocket(socket->fd);
  sts_net_reset_socket(socket);
}


int sts_net_accept_socket(sts_net_socket_t* listen_socket, sts_net_socket_t* remote_socket) {
  struct sockaddr_in  sock_addr;
  socklen_t           sock_alen;

  if (!listen_socket->server) {
    return sts_net__set_error("Cannot accept on client socket");
  }
  if (listen_socket->fd == INVALID_SOCKET) {
    return sts_net__set_error("Cannot accept on closed socket");
  }

  sock_alen = sizeof(sock_addr);
  listen_socket->ready = 0;
  remote_socket->ready = 0;
  remote_socket->server = 0;
  remote_socket->fd = (int)accept(listen_socket->fd, (struct sockaddr*)&sock_addr, &sock_alen);
  if (remote_socket->fd == INVALID_SOCKET) {
    return sts_net__set_error("Accept failed");
  }
  return 0;
}


int sts_net_send(sts_net_socket_t* socket, const void* data, int length) {
  if (socket->server) {
    return sts_net__set_error("Cannot send on server socket");
  }
  if (socket->fd == INVALID_SOCKET) {
    return sts_net__set_error("Cannot send on closed socket");
  }
  if (send(socket->fd, (const char*)data, (size_t)length, 0) != length) {
    return sts_net__set_error("Cannot send data");
  }
  return 0;
}


int sts_net_recv(sts_net_socket_t* socket, void* data, int length) {
  int result;
  if (socket->server) {
    return sts_net__set_error("Cannot receive on server socket");
  }
  if (socket->fd == INVALID_SOCKET) {
    return sts_net__set_error("Cannot receive on closed socket");
  }
  socket->ready = 0;
  result = (int)recv(socket->fd, (char*)data, (size_t)length, 0);
  if (result < 0) {
    return sts_net__set_error("Cannot receive data");
  }
  return result;
}


void sts_net_init_socket_set(sts_net_set_t* set) {
  int i;
  for (i = 0; i < STS_NET_SET_SOCKETS; ++i) {
    set->sockets[i] = NULL;
  }
}


int sts_net_add_socket_to_set(sts_net_socket_t *socket, sts_net_set_t *set) {
  int i;
  if (socket->fd == INVALID_SOCKET) {
    return sts_net__set_error("Cannot add closed socket to set");
  }
  for (i = 0; i < STS_NET_SET_SOCKETS; ++i) {
    if (!set->sockets[i]) {
      set->sockets[i] = socket;
      return 0;
    }
  }
  return sts_net__set_error("Socket set is full");
}


int sts_net_remove_socket_from_set(sts_net_socket_t *socket, sts_net_set_t *set) {
  int i;
  if (socket->fd == INVALID_SOCKET) {
    return sts_net__set_error("Cannot remove closed socket from set");
  }
  for (i = 0; i < STS_NET_SET_SOCKETS; ++i) {
    if (set->sockets[i] == socket) {
      set->sockets[i] = NULL;
      return 0;
    }
  }
  return sts_net__set_error("Socket not found in set");
}


int sts_net_check_socket_set(sts_net_set_t* set, const float timeout) {
  fd_set          fds;
  struct timeval  tv;
  int             i, max_fd, result;


  FD_ZERO(&fds);
  for (i = 0, max_fd = 0; i < STS_NET_SET_SOCKETS; ++i) {
    if (set->sockets[i]) {
      FD_SET(set->sockets[i]->fd, &fds);
      if (set->sockets[i]->fd > max_fd) {
        max_fd = set->sockets[i]->fd;
      }
    }
  }
  if (max_fd == 0) return 0;

  tv.tv_sec = (int)timeout;
  tv.tv_usec = (int)((timeout - (float)tv.tv_sec) * 1000000.0f);
  result = select(max_fd + 1, &fds, NULL, NULL, &tv);
  if (result > 0) {
    for (i = 0; i < STS_NET_SET_SOCKETS; ++i) {
      if (set->sockets[i]) {
        if (FD_ISSET(set->sockets[i]->fd, &fds)) {
          set->sockets[i]->ready = 1;
        }
      }
    }
  } else if (result == SOCKET_ERROR) {
    sts_net__set_error("Error on select()");
  }
  return result;
}


#ifndef STS_NET_NO_PACKETS
int sts_net_refill_packet_data(sts_net_socket_t* socket) {
  if (socket->ready) return 0;
  int received = sts_net_recv(socket, &socket->data[socket->received], STS_NET_PACKET_SIZE - socket->received);
  if (received < 0) return -1;
  socket->received += received;
  return 1;
}


int sts_net_receive_packet(sts_net_socket_t* socket) {
  if (socket->packet_length < 0) {
    if (socket->received >= 2) {
      socket->packet_length = socket->data[0] * 256 + socket->data[1];
      if (socket->packet_length > STS_NET_PACKET_SIZE) {
        sts_net_close_socket(socket);
        return sts_net__set_error("Received packet was too large");
      }
      socket->received -= 2;
      sts__memcpy(&socket->data[0], &socket->data[2], (size_t)socket->received);
    }
  }
  return ((socket->packet_length >= 0) && (socket->received >= socket->packet_length));
}


void sts_net_drop_packet(sts_net_socket_t* socket) {
  if ((socket->packet_length >= 0) && (socket->received >= socket->packet_length)) {
    sts__memcpy(&socket->data[0], &socket->data[socket->packet_length], (size_t)(socket->received - socket->packet_length));
    socket->received -= socket->packet_length;
    socket->packet_length = -1;
  }
}
#endif // STS_NET_NO_PACKETS

#endif // STS_NET_IMPLEMENTATION
////////////////////////////////////////////////////////////////////////////////
//
//  EXAMPLE
//    A simple broadcast server.
//
#if 0
#include <stdlib.h>
#include <stdio.h>

#define STS_NET_IMPLEMENTATION
#include "sts_net.h"


void panic(const char* msg) {
  fprintf(stderr, "PANIC: %s\n\n", msg);
  exit(EXIT_FAILURE);
}


int main(int argc, char *argv[]) {
  int               i, j, bytes;
  sts_net_set_t     set;
  sts_net_socket_t  server;
  sts_net_socket_t  clients[STS_NET_SET_SOCKETS];
  char              buffer[256];

  (void)(argc);
  (void)(argv);

  for (i = 0; i < STS_NET_SET_SOCKETS; ++i) {
    clients[i].ready = 0;
    clients[i].fd = INVALID_SOCKET;
  }

  sts_net_init();
  if (sts_net_open_socket(&server, NULL, "4040") < 0) panic(sts_net_get_last_error());
  sts_net_init_socket_set(&set);
  if (sts_net_add_socket_to_set(&server, &set) < 0) panic(sts_net_get_last_error());

  while(1) {
    puts("Waiting...");
    if (sts_net_check_socket_set(&set, 0.5) < 0) panic(sts_net_get_last_error());
    // check server
    if (server.ready) {
      for (i = 0; i < STS_NET_SET_SOCKETS; ++i) {
        if (clients[i].fd == INVALID_SOCKET) {
          if (sts_net_accept_socket(&server, &clients[i]) < 0) panic(sts_net_get_last_error());
          if (sts_net_add_socket_to_set(&clients[i], &set) < 0) panic(sts_net_get_last_error());
          puts("Client connected!");
          break;
        }
      }
    }
    // check clients
    for (i = 0; i < STS_NET_SET_SOCKETS; ++i) {
      if (clients[i].ready) {
        memset(buffer, 0, sizeof(buffer));
        bytes = sts_net_recv(&clients[i], buffer, sizeof(buffer) - 1);
        if (bytes <= 0) {
          if (sts_net_remove_socket_from_set(&clients[i], &set) < 0) panic(sts_net_get_last_error());
          sts_net_close_socket(&clients[i]);
          puts("Client disconnected");
        } else {
          // broadcast
          for (j = 0; j < STS_NET_SET_SOCKETS; ++j) {
            if (clients[j].fd != INVALID_SOCKET) {
              if (sts_net_send(&clients[j], buffer, bytes) < 0) panic(sts_net_get_last_error());
            }
          }
          printf("Broadcast: %s\n", buffer);
        }
      }
    }
  }

  sts_net_shutdown();
  return 0;
}
#endif // 0
/*
  This is free and unencumbered software released into the public domain.

  Anyone is free to copy, modify, publish, use, compile, sell, or
  distribute this software, either in source code form or as a compiled
  binary, for any purpose, commercial or non-commercial, and by any
  means.

  In jurisdictions that recognize copyright laws, the author or authors
  of this software dedicate any and all copyright interest in the
  software to the public domain. We make this dedication for the benefit
  of the public at large and to the detriment of our heirs and
  successors. We intend this dedication to be an overt act of
  relinquishment in perpetuity of all present and future rights to this
  software under copyright law.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
  IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
  OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
  OTHER DEALINGS IN THE SOFTWARE.

  For more information, please refer to <http://unlicense.org/>
*/
