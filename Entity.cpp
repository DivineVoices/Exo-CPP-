#include "Entity.h"

Entity::Entity(float _x, float _y) : position(_x, _y)
{

}

Vector2 Entity::getPos()
{
	return position;
}

void Entity::setPos(Vector2 newPosition)
{
	position = newPosition;
}