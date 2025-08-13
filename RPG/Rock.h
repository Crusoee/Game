#pragma once
#include "Object.h"
class Rock :
    public Object
{
    public:
    Rock(int posX, int posY, int sizeX, int sizeY);
    
    // Rock specific properties can be added here
    // For example, rocks might have a different type of damage or special properties
	// but for now, we keep it simple as per the original code.
};

