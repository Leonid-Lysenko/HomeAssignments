/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include "guns.hpp"

Guns::Guns(int damage) : amountDamage(damage) {}

int Guns::getDamage() const
{
    return amountDamage;
}

void Guns::setDamage(int damage)
{
    amountDamage = damage;
}

std::ostream& operator<<(std::ostream& os, const Guns& gun)
{
    os<<"Damage: "<<gun.getDamage();
    
    return os;
}

bool Guns::operator>(const Guns& matching) const
{
    return amountDamage > matching.amountDamage;
}

bool Guns::operator<(const Guns& matching) const
{
    return amountDamage < matching.amountDamage;
}

bool Guns::operator==(const Guns& matching) const
{
    return amountDamage == matching.amountDamage;
}

