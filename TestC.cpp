#include <iostream>
#include "Vector2.h"
#include "Entity.h"
#include "AMovable.h"
#include "Alive.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"


int main()
{
    Vector2 position(10, 2);
    Vector2 direction(1, 0);  
    Mob mob(position, 100, 100, direction, 2); 
    mob.takeDamage(50);  
    mob.move();  
    mob.move();
    mob.move();
    mob.takeDamage(50); 
    return 0;
}
