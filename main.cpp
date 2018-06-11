#include "inc/common.h"
#include "inc/sfml.h"

int main()
{
    //std::string input;
    //
    //std::cout << "Hello world";
    //
    //std::cin >> input;
    
    sfml1 game1 (sf::Vector2f(800, 800), 60, sf::Vector2f(10, 10), sf::Vector2f(500, 500));
    // sf::Vector2f winSize, int fps, sf::Vector2f view1Pos, sf::Vector2f view1Size
    game1.sfmlLoop();
    
    return 0;
}
