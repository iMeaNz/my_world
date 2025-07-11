# my_world
## Overview
**my_world** is a simple 3D wireframe world viewer written in C using the CSFML (C bindings for SFML) library. The program projects 3D points into 2D using isometric projection, and renders a grid mesh representing the terrain. This project demonstrates low-level graphics programming, custom algorithms for projection and line drawing, and interactive controls.

---

## Features
- **3D to 2D projection**: isometric projection supported.  
- **Interactive controls**: zoom, pan, rotate around the X/Y/Z axes.  
- **Terraforming**: Level up or down the map buy left/right clicking
- **Color mapping**: Ability to change the texture of the tiles.  
- **Focused zoom**: Zoom focused on the position of the mouse
- **Window management**: CSFML event handling for keyboard and mouse input.  

---

## Dependencies

- **CSFML** (>= 2.5)  
- **GCC** (>= C11) or **Clang**  
- **Make** (or an equivalent build tool)  
- Standard C library headers (`stdlib.h`, `stdio.h`, `math.h`) 

## Screenshots
![example1](https://github.com/iMeaNz/my_world/blob/main/usage.png?raw=true)
___
![example2](https://github.com/iMeaNz/my_world/blob/main/example.png?raw=true)