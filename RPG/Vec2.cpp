#include "Vec2.h"

Vec2::Vec2(float x, float y) {
	this->x = x;
	this->y = y;
};

Vec2::Vec2() {
	this->x = 0;
	this->y = 0;
};

float Vec2::getMagnitude() {
	return std::sqrt(x * x + y * y);
}

Vec2 Vec2::getNorm() {
	float radians = std::atan2(this->y, this->x);
	return {std::cos(radians), std::sin(radians)};
};

Vec2& Vec2::operator=(const Vector2& vector) {
	x = vector.x;
	y = vector.y;
	return *this;
};

Vec2& Vec2::operator-(const Vec2& vector) {
	Vec2 result;
	result.x = this->x - vector.x;
	result.y = this->y - vector.y;
	return result;
};

Vec2& Vec2::operator+(const Vec2& vector) {
	Vec2 result;
	result.x = this->x + vector.x;
	result.y = this->y + vector.y;
	return result;
};

Vec2& Vec2::operator*(const int& constant) {
	Vec2 result;
	result.x = this->x * constant;
	result.y = this->y * constant;
	return result;
};
