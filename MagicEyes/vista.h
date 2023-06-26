#pragma once
#include <SFML/Graphics.hpp>

//vista
//KEYBOARD____________________
//WASD:
bool keyboardPressW() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		return true;
	}
	return false;
}
bool keyboardPressS() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		return true;
	}
	return false;
}
bool keyboardPressA() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		return true;
	}
	return false;
}
bool keyboardPressD() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		return true;
	}
	return false;
}
//Flechas:
bool keyboardPressUp() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		return true;
	}
	return false;
}
bool keyboardPressDown() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		return true;
	}
	return false;
}
bool keyboardPressRight() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		return true;
	}
	return false;
}
bool keyboardPressLeft() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		return true;
	}
	return false;
}
