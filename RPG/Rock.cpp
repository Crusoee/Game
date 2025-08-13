#include "Rock.h"

Rock::Rock(int posX, int posY, int sizeX, int sizeY) : Object(posX, posY, sizeX, sizeY)
{
	this->name = "Rock";
	this->sizeX = 20;
	this->sizeY = 20;
	this->damage = 0;
	this->health = 10;
	this->speed = 0; // Rocks don't move
}