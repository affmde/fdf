# <center>FDF - 42 School project</center>
## Description
This 42 project is about creating a simple wireframe model representation of a 3D landscape by linking various points (x, y, z) thanks to line segments (edges).
This is a introductory project to the minilibX library. This library was developed internally and includes basic necessary tools to open a window, create images and deal with keyboard and mouse events.
This is a great opportunity to get familiar with the MiniLibX, to discover the basics of graphics programming, especially how to place points in space, join them and, most important, how to see the scene from a specific viewpoint. 

<br>
<br>

## Language Used:
[![My Skills](https://skills.thijs.gg/icons?i=c)](https://skills.thijs.gg)

<br>

# <img src="https://cdn-icons-png.flaticon.com/128/627/627495.png" data-canonical-src="https://gyazo.com/eb5c5741b6a9a16c692170a41a49c858.png" width="40" height="40" /> Usage

## *Requirements:*

You need to install the minilibX. You can find it from [here](https://github.com/42Paris/minilibx-linux)
<br>
<br>
## *Instalation:*


**1- Clone the repository:**

    # git clone https://github.com/affmde/fdf.git
	cd fdf
	make
	./fdf [map]


After the program name pass as argument the name of a map file. For this project the maps are assumed to be valid, so if you create a new map, make sure that the map is valid.
Check the makefile and change the way it compiles according you are using OS or Linux. Simply comment/uncomment the commandas there

Map example: 

	0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
	0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
	0  0 10 10  0  0 10 10  0  0  0 10 10 10 10 10  0  0  0
	0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
	0  0 10 10  0  0 10 10  0  0  0  0  0  0  0 10 10  0  0
	0  0 10 10 10 10 10 10  0  0  0  0 10 10 10 10  0  0  0
	0  0  0 10 10 10 10 10  0  0  0 10 10  0  0  0  0  0  0
	0  0  0  0  0  0 10 10  0  0  0 10 10  0  0  0  0  0  0
	0  0  0  0  0  0 10 10  0  0  0 10 10 10 10 10 10  0  0
	0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0
	0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0  0

<br><br>

<br><br>

## Related Projects

+ [42-get_next_line](https://github.com/affmde/42-get_next_line)
+ [42-ft_printf](https://github.com/affmde/42-ft_printf)