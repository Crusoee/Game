#pragma once
#include "Mobile.h"
#include <raylib.h>

class Player:
	public Mobile
{
public:
	Player();
	void getInput();
};
