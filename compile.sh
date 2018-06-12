clear

clear

clear

g++ main.cpp src/sfml.cpp src/player.cpp src/wall.cpp src/enemy.cpp inc/common.h inc/sfml.h inc/player.h inc/wall.h inc/enemy.h -o obj/run.exe -lsfml-graphics -lsfml-window -lsfml-system

cd obj

./run.exe

cd ..
