#include <iostream>
#include "BreakableObject.h"

BreakableObject::BreakableObject(Vector2 position, float maxLife, float currentLife)
    : Entity(position.GetX(), position.GetY()), Alive(maxLife, currentLife)
{
    std::cout << "Breakable Object just created at x = " << position.GetX()
        << " and y = " << position.GetY()
        << " with " << maxLife << " life" << std::endl;
}

void BreakableObject::takeDamage(float damage)
{

    float newLife = getCurLife() - damage;
    setLife(newLife);

    if (newLife <= 0) {
        std::cout << "Breakable Object just broke" << std::endl;
    }
}
