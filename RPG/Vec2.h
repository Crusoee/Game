#pragma once
#include <stdio.h>
#include <cmath>
#include <raylib.h>

class Vector2;

class Vec2
{
public:
	float x;
	float y;

	Vec2(const Vector2& vector) { *this = vector; };
	Vec2& operator=(const Vector2& vector);
	Vec2& operator-(const Vec2& vector);
	Vec2& operator+(const Vec2& vector);
	Vec2& operator*(const int& constant);

	float getMagnitude();
	Vec2 getNorm();
	Vec2(float x, float y);
	Vec2();
};

