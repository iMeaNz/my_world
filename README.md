
# my_world

In this project, we are asked to create our own terraformer using isometric 3D.  
We have to display map and edit it at runtime.  
The map is a wireframed map with tiles that are squares having all the same size.  
The ground must be altered by raising, lowering or tilting tiles.  

## Requirements
### Mandatory
• The window can be closed using events.  
• The game manages the input from the mouse click and keyboard.  
• Animations in your program are frame rate independent.  
### Must
• The map must be displayed using a 3D projection (whether isometric or parallel).  
• The tiles and their corners must be selected using the mouse.  
• At least 3 effects (including the modification of altitude) must be implemented and selectable with a
toolbar in the window (e.g. reinitialization of the tiles’ altitudes, modification of the size of the area of
effect, switching between “tiles selectable” and “corners selectable”).  
### Should
• Your window should stick between 800x600 pixels and 1920x1080 pixels.  
• The size of the map should be selected using editable textboxes in the window.  
• Help boxes should appear as the mouse hovers elements in the toolbar(s).  
• The buttons should have at least 3 visual states : idle, hover, and clicked.  
• Tiles should have a texture.  
• The format of saved maps should be in a .legend file.  
• Moving around on the map should be done with arrow keys and/or by positionning the mouse cursor
on the edges of the window.  
• Zooming up and down should be done with keyboard and/or the scrolling button of the mouse.  
### Could
• The program could save the map in a file at the end of the program in the terminal.  
• The program could save the map in a file at runtime using buttons and tools.  
• The program could load a map at the beginning of the program in the terminal (argument or stdin).  
• The program could load a map at runtime using buttons and tools.  
• The name of the saved files could be chosen at runtime.  
• Tools can be selected using keyboard shortcuts.  
• Sounds could be played on user actions.  
• Textures of the tiles could change depending on the direction of their slope.  
• Elements (e.g. buildings, roads) could be added on the map in compliance with the landforms.  
• Water areas could be added.  
## Usage
![example1](https://github.com/iMeaNz/my_world/blob/main/usage.png?raw=true)
___
![example2](https://github.com/iMeaNz/my_world/blob/main/example.png?raw=true)