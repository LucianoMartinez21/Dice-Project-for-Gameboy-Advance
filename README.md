# Dice Gameboy Application
Small Application to roll a dice in the GameBoy Advance Console, Implemented using the public library Butano for C++.

Things to fix/Add are:
* Implement D6, D8, D10, D12, D20 and D100.
* Add sound effects

## How get a .gb file?

1. Clone or Download the project.
2. Clone or Download the Butano SDK.
https://github.com/GValiente/butano
3. Change the Makefile to address the location of Butano files
```Make
LIBBUTANO   	:=  {Your Butano Folder}/butano
PYTHON      	:=  python3
SOURCES     	:=  src {Your Butano Folder}/common/src
INCLUDES    	:=  include {Your Butano Folder}/common/include
DATA        	:=
GRAPHICS    	:=  graphics {Your Butano Folder}/common/graphics
AUDIO       	:=  audio {Your Butano Folder}/common/audio
AUDIOBACKEND	:=  maxmod
AUDIOTOOL		:=
DMGAUDIO    	:=  dmg_audio {Your Butano Folder}/common/dmg_audio
```
4. Using a terminal inside the project's folder execute the make command.
```bash
make
```

## Tools Used
* Butano: To develop the project using C++.
* GIMP & Firealpaca: To design the interface for the project.
> Recommendation: In case of Linux Users use the "Convert" command e.g `convert image.bmp -compress none -type Palette BMP3:image.bmp`.


## Acknowledgments

* **Coding: Luciano Martínez**
* **Interface by Luciano Martínez**
* **Art by Gerson Marcelo: https://gersonmarcelo.itch.io/gems-spritesheets & https://es.fiverr.com/gersonmarcel544**

I don't claim any ownership over The Gameboy or Gameboy Advance trademark for the development for this project, Gameboy, Gameboy Advance and all its rights related are own by Nintendo©.




