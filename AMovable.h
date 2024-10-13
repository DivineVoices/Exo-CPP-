#pragma once
#include "Vector2.h"

class AMovable
{
protected:
	Vector2 direction;
	float speed;
public:
	AMovable(Vector2 _direction, float _speed);
	virtual void setDir(Vector2 newDir);
	virtual void setSpeed(float newSpeed);
	virtual void move() = 0;
};
