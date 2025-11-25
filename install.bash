sudo apt-get update
sudo apt-get install cmake pkg-config
sudo apt-get install mesa-utils libglu1-mesa-dev freeglut3-dev mesa-common-dev
sudo apt-get install libglew-dev libglfw3-dev libglm-dev

git clone https://github.com/glfw/glfw.git
cd glfw
cmake .
make
sudo make install
cd ..
rm -rf glfw
