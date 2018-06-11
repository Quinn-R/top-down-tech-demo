clear

clear

clear

g++ main.cpp src/sfml.cpp src/player.cpp src/wall.cpp inc/common.h inc/sfml.h inc/player.h inc/wall.h -o obj/run -lsfml-graphics -lsfml-window -lsfml-system

cd obj

./run

cd ..
