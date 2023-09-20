#include "C:/SFML/include/SFML/Graphics.hpp"
#include "C:/SFML/include/SFML/System.hpp"
#include "C:/SFML/include/SFML/Window.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 100, 320 }), "title");

	window.clear();

	sf::CircleShape shape1(48);
	shape1.setPosition({ 25, 10 });
	shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));
	window.draw(shape1);

	sf::CircleShape shape2(48);
	shape2.setPosition({ 25, 110 });
	shape2.setFillColor(sf::Color(0x0, 0xFF, 0x0));
	window.draw(shape2);

	sf::CircleShape shape3(48);
	shape3.setPosition({ 25, 210 });
	shape3.setFillColor(sf::Color(0x0, 0x0, 0xFF));
	window.draw(shape3);

	window.display();

	sf::sleep(sf::seconds(5));
}