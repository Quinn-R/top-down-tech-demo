#ifndef SFML_H
#define SFML_H

#include "common.h"
#include "wall.h"
#include "player.h"

class sfml1
{
private:
    
    sf::RenderWindow window;
    sf::View view1;
    sf::Event event;
    
    int last_x;
    int last_y;
    
    int speed;
    
    int collideTop;
    int collideBottom;
    int collideLeft;
    int collideRight;
    
    std::vector<wall> walls;
    std::vector<wall> walls2;
    
    std::vector<player> players;
    
    // sf::Vector2f charSize, sf::Color charCol, sf::Vector2f charPos, int speed, sf::Color bufCol
    //player char1 = player(sf::Vector2f(32, 32), sf::Color::Black, sf::Vector2f(0, 0), speed, sf::Color::Green);
    //sf::Vector2f wallSize, sf::Vector2f wallPos, sf::Color wallCol
    //wall w1 = wall(sf::Vector2f(32, 32), sf::Vector2f(50, 50), sf::Color::Red);
    //wall w2 = wall(sf::Vector2f(32, 32), sf::Vector2f(50, 50), sf::Color::Red);
    
public:
    
    sfml1(sf::Vector2f winSize, int fps, sf::Vector2f view1Pos, sf::Vector2f view1Size);
    void update();
    void buttonPressed();
    void draw();
    void setWalls();
    void sfmlLoop();
    
};

#endif
