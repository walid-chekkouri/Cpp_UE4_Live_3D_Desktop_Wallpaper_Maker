#                Live Animated 3D Wallpaper
#                Maker in UE4
## About:
Dynamic Desktop Wallpaper tool made using UE4 in C++ and BP.
++WATCH VIDEO DEMO:++ https://youtu.be/blNmtoWyL7M

 This is an open source project I worked on in UE4, it contains C++ functionality that can be easily called in Blueprints. It's a project showcasing the use of threads in UE4 and how to make BP callable functions in C++.

 This project uses Victory plugin in order to use certain BP nodes. Here is the official plugin page: 
https://github.com/EverNewJoy/VictoryPlugin

 PS: the FPS is dropped due to the tick function used to update the wallpaper each frame, this is just a prototype for now since the improved version is currently under development.
Project initially created in Unreal Engine 4.24

## Contents:

 This is a full project containing a simple third person map with a camera that uses a C++ function that can be called easily in Blueprint. The camera Blueprint captures live game-play and displays it on your desktop.
There are 2 C++ functions included, by default the project uses the threaded version.
 For performance purposes the user can easily change the frame delay as well as texture quality(1-6) inside the options menu. For Maximum performance the delay should be set to 0, and the texture quality is set to 6.

![Instantané 1 (26-02-2020 13-28)](https://user-images.githubusercontent.com/11277981/75369344-916e1880-58c3-11ea-9fd1-82fba29b93c5.png)

![Instantané 2 (26-02-2020 17-38)](https://user-images.githubusercontent.com/11277981/75369348-929f4580-58c3-11ea-9109-d8c59ac8094f.png)
