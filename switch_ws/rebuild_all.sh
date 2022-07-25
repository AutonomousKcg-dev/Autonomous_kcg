cd Deliverables/colcon_workspace
rm -r build log install
colcon build
cd ../..
cd switch_ws
rm -r build log install
colcon build

