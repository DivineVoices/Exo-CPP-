#pragma once
#include "Vector2.h"

class Entity
{
protected:
	Vector2 position;
public:
	Entity(float _x, float _y);
	virtual Vector2 getPos();
	virtual void setPos(Vector2);

};