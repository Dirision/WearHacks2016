#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <stdlib.h>
#include <string>
#include <stdio.h>
#include <cstdio>
int main()
{
	using namespace std;


	
	int lambdaChange = 0;
	int lambda = 0;
	
	char lambdaText [128];
	
	 sprintf(lambdaText,"Lambda is %d\nChange is %d",lambda,lambdaChange);
	// nasty text stuff
	sf::Font font;
	font.loadFromFile("./style.ttf");
	sf::Text text;
	text.setFont(font);
	text.setString(lambdaText);	
	//nastiness ends 


	//sf::RenderWindow App(sf::VideoMode(640, 480, 32), "SFML Window");
	sf::RenderWindow view(sf::VideoMode(1280,720),"Display");
	sf::RenderWindow window(sf::VideoMode(200,200), "Controls");
	while (window.isOpen())
	{	
		// event madness begins 
		sf::Event event;
		while(window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed){window.close();}
			if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Right))
			{
				lambdaChange+=5;
				lambda+=5;
				sprintf(lambdaText,"Lambda is %d\nChange is %d",lambda,lambdaChange);
				text.setString(lambdaText);	
			}
			if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Left))
			{
				lambdaChange-=5;
				lambda-=5;
				sprintf(lambdaText,"Lambda is %d\nChange is %d",lambda,lambdaChange);
				text.setString(lambdaText);	
			}
			
		}
		// event madness ends
		
		
		view.clear();
		window.clear();
		
		window.draw(text);

		// austin do your drawing here 
		// your window is called view
		//  aaaaaaaaa
		view.display();
		window.display();
	} // end of while loop
return 0;
}

void setText(int change){



}
