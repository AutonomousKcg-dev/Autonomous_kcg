# mobileLab idan-drive-by-wire example
This is a basic program to run on the experiment vehicle's computer. <br/>
The objective is simply show case a simple interaction with idan drive-by-wire actuators. 

Using this program, you can learn about the communication with the actuators and by doing so, you will be able to program a more advanced algorithms that communicate with the system. 

Firstly, read the documentation at [Idan Drive-By-Wire and Remote Controlled Operation](https://docs.google.com/document/d/1nCO73Ism26cW5EMAiy0pBbewL8hwsbtK6MhUgJmgq1M)'s explanation of jatson side. (The code at the vehicle)

## PACKAGES
The project is built on two packages: <br/>
### Kvaser_interface-master
This package is the code that uses the kvaser can interface to connect between idan system and the jatson computer. (if you don't know what is kvaser interface or jatson computer, read about it at the link above) <br/>

### idan_control_example
The package that is responsible for reciving input, normalize it to idan's system values, and send it to the node "can rx pub" that the kvaser interface listens to and sends it to the idan system. 

## HOW TO RUN
Complie the program using 'catkin_make', run the program using 'roslaunch idanControl.launch' (file is at idan_control_example/launch) 
