#include "C:/SFML/include/SFML/Graphics.hpp"
#include "C:/SFML/include/SFML/System.hpp"
#include "C:/SFML/include/SFML/Window.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Convex Shape");

	sf::ConvexShape trapeze;
	trapeze.setFillColor(sf::Color(0x89, 0x08, 0x35));
	trapeze.setPointCount(4);
	trapeze.setPoint(0, {250, 300});
	trapeze.setPoint(1, {450, 300});
	trapeze.setPoint(2, {420, 250});
	trapeze.setPoint(3, {280, 250});

	sf::RectangleShape rectangle({200, 100});
	rectangle.setPosition({ 250, 300 });
	rectangle.setFillColor(sf::Color(0x96, 0x4B, 0x0));

	sf::RectangleShape pipe({20, 35});
	pipe.setPosition({ 380, 240 });
	pipe.setFillColor(sf::Color(0x80, 0x80, 0x80));

	sf::RectangleShape flue({30, 10});
	flue.setPosition({ 375, 240 });
	flue.setFillColor(sf::Color(0x80, 0x80, 0x80));

	sf::RectangleShape door({30, 60});
	door.setPosition({ 270, 360 });
	door.setFillColor(sf::Color(0x0, 0x0, 0x0));

	sf::CircleShape shape1(10);
	shape1.setPosition({ 383, 220 });
	shape1.setFillColor(sf::Color(0x90, 0x90, 0x90));

	sf::CircleShape shape2(12);
	shape2.setPosition({ 386, 205 });
	shape2.setFillColor(sf::Color(0x90, 0x90, 0x90));

	sf::CircleShape shape3(16);
	shape3.setPosition({ 388, 185 });
	shape3.setFillColor(sf::Color(0x90, 0x90, 0x90));

	sf::CircleShape shape4(17);
	shape4.setPosition({ 389, 165 });
	shape4.setFillColor(sf::Color(0x90, 0x90, 0x90));


	window.clear();
	window.draw(trapeze);
	window.draw(rectangle);
	window.draw(door);
	window.draw(flue);
	window.draw(pipe);
	window.draw(shape1);
	window.draw(shape2);
	window.draw(shape3);
	window.draw(shape4);
	window.display();

	sf::sleep(sf::seconds(5));
}