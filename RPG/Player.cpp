#include "Player.h"
#include <iostream>
Player::Player() {
	this->sizeX = 30;
	this->sizeY = 60;
	this->name = "Harold";
	this->speed = 2000;
	this->pos = { 200,200 };
};

void Player::getInput() {
	if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)) {
		std::cout << "happened!" << std::endl;
		setTarget(GetMousePosition());
	}
};