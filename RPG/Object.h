#pragma once
#include <stdio.h>
#include <string>
#include "Vec2.h"
#include <raylib.h>
#include <cmath>
#include <stdio.h>

using namespace std;

class Object
{
public:
	Object();

	int health;
	int damage;
	int thorns;
	int lifesteal;

	Vec2 pos;
	int sizeX;
	int sizeY;

	string name;

};

