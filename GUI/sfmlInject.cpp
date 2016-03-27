#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <stdlib.h>

int main()
{
	int lambdaChange = 0;
	//sf::RenderWindow App(sf::VideoMode(640, 480, 32), "SFML Window");

	sf::RenderWindow window(sf::VideoMode(400,400), "SFML");
	while (window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event)){
			if (event.type == sf::Event::Closed){window.close();}
		}

		window.clear();/*
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			

		}*/
		window.display();
	} // end of while loop
return 0;
}
