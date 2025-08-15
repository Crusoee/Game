#include "Mobile.h"
#include <iostream>

Mobile::Mobile() {
	this->speed = 1;
};

void Mobile::move() {
	Vec2 targetNorm = target.getNorm();

	this->pos = this->pos + targetNorm * speed * GetFrameTime();
	
	//std::cout << pos.x << " " << pos.y << std::endl;
};

void Mobile::setTarget(Vec2 target) {
	Vec2 targetRelative = target - pos;
	this->target = targetRelative;
};