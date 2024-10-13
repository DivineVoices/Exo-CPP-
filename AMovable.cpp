#include "AMovable.h"

AMovable::AMovable(Vector2 _direction, float _speed) : direction(_direction), speed(_speed) {}

void AMovable::setDir(Vector2 newDir)
{
	direction = newDir;
}

void AMovable::setSpeed(float newSpeed)
{
	speed = newSpeed;
}
