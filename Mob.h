#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"

class Mob : public Entity, public Alive, public AMovable
{
public:
    Mob(Vector2 position, float maxLife, float currentLife, Vector2 direction, float speed);

    virtual void takeDamage(float damage) override;
    virtual void move() override;
};
