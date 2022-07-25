# How To Build
all you need to do is run `./rebuild_all.sh`

# How To Run
1. have 2 terminals open in this directory
2. in the first run `./run_switch_node.sh <flags>` (this is for starting the node)
3. in the second one run `./run_bag.sh` (this is for starting the bag)

### Flags
i added some flags so the screen will not get crowded
Flags:
1. -lanes: will show the lanes in matplotlib
2. -grid: will show the occupancy grid in opencv
3. -gps: will show the gps route in matplotlib

example: `./run_switch_node.sh -lanes -gps` will show both lanes and gps (but matplotlib sucks so there is an issue with this specific combo)

# How To Modify
if any modification has been done, make sure everything is saved and run `./build.sh` (this will rebuild any package in the `switch_ws` directory) 
the switch file is in the `switch_ws/src/switch_ws/switch_ws` directory under the name `switch`, make sure you open the code editor from a terminal after sourcing `Deliverables/colcon_build/install/setup.bash` (in irder to see the message info in the code editor)