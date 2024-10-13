#include <iostream>
#include "StaticObject.h"

StaticObject::StaticObject(Vector2 _position) : Entity(_position.GetX(), _position.GetY()) {
    std::cout << "Static Object just created at x = " << _position.GetX() << " and y = " << _position.GetY() << std::endl;
}