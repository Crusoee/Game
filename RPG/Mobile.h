#pragma once
#include "Object.h"
#include "Vec2.h"
#include <raylib.h>

class Mobile :
    public Object
{
public:
    Vec2 target;
    float speed;

    Mobile();
    void setTarget(Vec2 target);
    void move();
};

