#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <stdlib.h>

int main()
{
	int lambdaChange = 0;
	//sf::RenderWindow App(sf::VideoMode(640, 480, 32), "SFML Window");
	sf::RenderWindow view(sf::VideoMode(1280,720),"Display");
	sf::RenderWindow window(sf::VideoMode(400,400), "Controls");
	while (window.isOpen())
	{
		sf::Event event;
		while(window.pollEvent(event)){
			if (event.type == sf::Event::Closed){window.close();}
		}
		view.clear();
		window.clear();/*
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			

		}*/
		view.display();
		window.display();
	} // end of while loop
return 0;
}
