#include "../inc/sfml.h"

sfml1::sfml1(sf::Vector2f winSize, int fps, sf::Vector2f view1Pos, sf::Vector2f view1Size)
{
	window.create(sf::VideoMode(winSize.x, winSize.y), "backup your files"/*, sf::Style::Titlebar | sf::Style::Close*/);
	window.setFramerateLimit(fps);
	view1.setCenter(view1Pos);
	view1.setSize(view1Size);
	window.setView(view1);
	//view1.setSize(sf::Vector2f(200, 200));
	//view1.zoom(0.5f);
	//view1.setScale(sf::Vector2f(100, 100))
	//view1.setViewport(sf::FloatRect(0, 0, 1, 1));
	//view1.setViewport(sf::FloatRect(0.25f, 0.25, 0.5f, 0.5f));
	speed = 4;
	
	players.push_back(player(sf::Vector2f(32, 32), sf::Color::Black, sf::Vector2f(1, 1), speed, sf::Color::Green));
	
	collideTop = 0;
    collideBottom = 0;
    collideLeft = 0;
    collideRight = 0;
}

void sfml1::update()
{
	players[0].bufUpdate();
	
	/*if(! players[0].character.getGlobalBounds().intersects(w1.wall1.getGlobalBounds()))
	{
		last_x = players[0].character.getPosition().x;
		last_y = players[0].character.getPosition().y;
	}*/
	
	view1.setCenter(players[0].character.getPosition().x + players[0].character.getSize().x / 2, players[0].character.getPosition().y + players[0].character.getSize().y / 2);
	window.setView(view1);
}

void sfml1::buttonPressed()
{
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		for(int i = 0; i < speed; i++)
		{
			players[0].move("left", walls);
		}
	}
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		for(int i = 0; i < speed; i++)
		{
			players[0].move("right", walls);
		}
	}
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		for(int i = 0; i < speed; i++)
		{
			players[0].move("up", walls);
		}
	}
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		for(int i = 0; i < speed; i++)
		{
			players[0].move("down", walls);
		}
	}
}

void sfml1::draw()
{
	window.clear(sf::Color::White);
	
	window.draw(players[0].topBuf);
	window.draw(players[0].bottomBuf);
	window.draw(players[0].leftBuf);
	window.draw(players[0].rightBuf);
	window.draw(players[0].character);
	
	//std::cout << "Hello" << 1 << std::endl;
	
	for(int i = 0; i < walls.size(); i++)
	{
		window.draw(walls[i].wall1);
		//std::cout << "Hello" << i << std::endl;
	}
	/*for(int i = 0; i < walls2.size(); i++)
	{
		window.draw(walls2[i].wall1);
		std::cout << "Hello" << i << std::endl;
	}*/
	
	window.display();
}

void sfml1::setWalls()
{
	int pos = 50, pos2 = 50;
	for(int i = 0; i < 5; i++)
	{
		walls.push_back(wall(sf::Vector2f(32, 32), sf::Vector2f(pos, 50), sf::Color::Red));
		pos = pos + 32;
	}
	/*pos = walls[2].wall1.getSize().x;
	pos2 = walls[2].wall1.getSize().y - 50;
	for(int i = 0; i < 5; i++)
	{
		walls2.push_back(wall(sf::Vector2f(32, 32), sf::Vector2f(1640, pos2), sf::Color::Red));
		pos2 = pos2 - 32;
	}*/
}

void sfml1::sfmlLoop()
{
	setWalls();
	while(window.isOpen())
	{
		
		//update();
		buttonPressed();
		update();
		
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
				window.close();
			
				/*if (event.type == sf::Event::Resized)
				{
					// update the view to the new size of the window
					//event.size.width, event.size.height);
					//view1.setWidth();
					//view1.setViewport(sf::FloatRect(0, 0, 1, 1.5f));
					view1.scale(1, 1);
					window.setView(view1);
				}*/
		}
		
		draw();
		
	}
}
