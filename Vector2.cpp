#include "Vector2.h"

Vector2::Vector2(float _x, float _y) : x(_x), y(_y) {}

void Vector2::SetX(float NewX)
{
	x = NewX;
}
void Vector2::SetY(float NewY)
{
	y = NewY;
}

float Vector2::GetX()
{
	return x;
}

float Vector2::GetY()
{
	return y;
}