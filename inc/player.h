#ifndef PLAYER_H
#define PLAYER_H

#include "common.h"
#include "wall.h"

class player
{
    
public:
    
    sf::RectangleShape character;
    
    sf::RectangleShape topBuf;
    sf::RectangleShape bottomBuf;
    sf::RectangleShape leftBuf;
    sf::RectangleShape rightBuf;
    
    int collideTop, collideBottom, collideLeft, collideRight;
    
    player(sf::Vector2f charSize, sf::Color charCol, sf::Vector2f charPos, int speed, sf::Color bufCol);
    sf::RectangleShape getPlayer();
    void bufUpdate();
    void move(std::string direction, std::vector<wall> walls);
    
};

#endif
