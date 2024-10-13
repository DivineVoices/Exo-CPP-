#include "Alive.h"

Alive::Alive(float _maxLife, float _currentLife) : maxLife(_maxLife), currentLife(_currentLife) {}

float Alive::getMaxLife() { return maxLife; }

float Alive::getCurLife() { return currentLife; }

void Alive::setLife(float newLife) { currentLife = newLife; }

void Alive::takeDamage(float damage) {
    currentLife -= damage;
}
