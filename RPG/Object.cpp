#include "Object.h"
#include <raylib.h>
#include <cmath>
#include <stdio.h>

void Object::move() 
{
	int x = 0;
	int y = 0;

	if (IsKeyDown(KEY_A)) {
		x = -this->speed;
	}
	if (IsKeyDown(KEY_D)) {
		x = this->speed;
	}
	if (IsKeyDown(KEY_W)) {
		y = -this->speed;
	}
	if (IsKeyDown(KEY_S)) {
		y = this->speed;
	}

	if (x != 0 && y != 0) {
		x = x * (std::sqrt(2) / 2);
		y = y * (std::sqrt(2) / 2);
	}

	this->posX += x;
	this->posY += y;
};

Object::Object(int posX, int posY, int sizeX, int sizeY) {
	this->posX = posX;
	this->posY = posY;
	this->sizeX = sizeX;
	this->sizeY = sizeY;

	Object::sizeX = 20;
	Object::sizeY = 20;
	Object::damage = 0;
	Object::health = 10;
	Object::speed = 5;
};