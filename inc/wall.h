#ifndef WALL_H
#define WALL_H

#include "common.h"

class wall
{
    
public:
    
    sf::RectangleShape wall1;
    
    wall(sf::Vector2f wallSize, sf::Vector2f wallPos, sf::Color wallCol);
    
};

#endif
