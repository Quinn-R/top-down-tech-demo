#ifndef ENEMY_H
#define ENEMY_H

#include "player.h"

class enemy: public player
{
private:
    
    sf::Vector2f playerPos;
    sf::Vector2f enemyPos;
    
public:
    
    enemy();
    void setPlayerPos();
    void moveToPlayer();
    
    
};

#endif
