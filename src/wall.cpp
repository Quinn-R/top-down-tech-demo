#include "../inc/wall.h"

wall::wall(sf::Vector2f wallSize, sf::Vector2f wallPos, sf::Color wallCol)
{
	wall1.setSize(sf::Vector2f(wallSize));
	wall1.setPosition(sf::Vector2f(wallPos));
	wall1.setFillColor(wallCol);
}

/*sf::RectangleShape wall::getWall()
{
	return wall1;
}*/
