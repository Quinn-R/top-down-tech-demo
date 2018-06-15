#include "../inc/common.h"
#include "../inc/enemy.h"

enemy::enemy()
{
    playerPos = (sf::Vector2f(0, 0));
    enemyPos = (sf::Vector2f(0, 0));
}

void enemy::setPlayerPos(sf::Vector2f playerP)
{
    playerPos = playerP;
}

void enemy::moveToPlayer()
{
    
}
