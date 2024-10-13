#pragma once
class IAttacker
{
private:
public:
	virtual void attack(class Alive* alive) = 0;
};
