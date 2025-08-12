#pragma once
#include <stdio.h>
#include <string>

using namespace std;

class Object
{
public:
	Object(int posX, int posY, int sizeX, int sizeY);

	int health;
	int damage;

	float posX;
	float posY;
	int sizeX;
	int sizeY;

	float speed;

	string name;

	void move();

};

