#include <iostream>
#include "Mob.h"

Mob::Mob(Vector2 position, float maxLife, float currentLife, Vector2 direction, float speed)
    : Entity(position.GetX(), position.GetY()), Alive(maxLife, currentLife), AMovable(direction, speed)
{
    std::cout << "Mob just created at x = " << position.GetX()
        << " and y = " << position.GetY()
        << " with " << maxLife << " life"
        << " with direction x = " << direction.GetX()
        << " and y = " << direction.GetY() << std::endl;
}

void Mob::takeDamage(float damage)
{
    float newLife = getCurLife() - damage;
    setLife(newLife);

    if (newLife <= 0) {
        std::cout << "Mob just died" << std::endl;
    }
}

void Mob::move()
{
    float newX = getPos().GetX() + direction.GetX() * speed;
    float newY = getPos().GetY() + direction.GetY() * speed;

    setPos(Vector2(newX, newY));

    std::cout << "Mob moved to x = " << newX
        << " and y = " << newY << std::endl;
}
