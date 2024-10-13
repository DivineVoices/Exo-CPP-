#pragma once
class Alive
{
private:
    float maxLife;
    float currentLife;
public:
    Alive(float _maxLife, float _currentLife);
    virtual float getMaxLife();
    virtual float getCurLife();
    virtual void setLife(float newLife);
    virtual void takeDamage(float damage);
};
