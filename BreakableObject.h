#pragma once
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Entity, public Alive
{
public:
    BreakableObject(Vector2 position, float maxLife, float currentLife);

    virtual void takeDamage(float damage) override;
};
