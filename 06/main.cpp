#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Convex Shape");

	window.clear();

	sf::RectangleShape rect1({17, 100});
	rect1.setPosition({30, 300});
	rect1.setFillColor(sf::Color(sf::Color::Red));
	window.draw(rect1);

	sf::CircleShape circle1(17);
	circle1.setPosition({50, 310});
	circle1.setOutlineThickness(10);
	circle1.setOutlineColor(sf::Color(sf::Color::Red));
	circle1.setFillColor(sf::Color(sf::Color::Black));
	window.draw(circle1);

	sf::CircleShape circle2(17);
	circle2.setPosition({50, 360});
	circle2.setOutlineThickness(10);
	circle2.setOutlineColor(sf::Color(sf::Color::Red));
	circle2.setFillColor(sf::Color(sf::Color::Black));
	window.draw(circle2);

	sf::RectangleShape rect2({20, 100});
	rect2.setPosition({100, 300});
	rect2.setFillColor(sf::Color(sf::Color::Red));
	window.draw(rect2);

	sf::RectangleShape rect3({20, 80});
	rect3.setRotation(-135);
	rect3.setPosition({120, 360});
	rect3.setFillColor(sf::Color(sf::Color::Red));
	window.draw(rect3);

	sf::RectangleShape rect4({20, 60});
	rect4.setRotation(-45);
	rect4.setPosition({120, 360});
	rect4.setFillColor(sf::Color(sf::Color::Red));
	window.draw(rect4);

	sf::RectangleShape rect5({20, 110});
	rect5.setRotation(-150);
	rect5.setPosition({200, 400});
	rect5.setFillColor(sf::Color(sf::Color::Red));
	window.draw(rect5);

	sf::RectangleShape rect6({20, 110});
	rect6.setRotation(150);
	rect6.setPosition({300, 385});
	rect6.setFillColor(sf::Color(sf::Color::Red));
	window.draw(rect6);

	sf::RectangleShape rect7({20, 80});
	rect7.setRotation(-90);
	rect7.setPosition({200, 375});
	rect7.setFillColor(sf::Color(sf::Color::Red));
	window.draw(rect7);

	window.display();

	sf::sleep(sf::seconds(5));
}