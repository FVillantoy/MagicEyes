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