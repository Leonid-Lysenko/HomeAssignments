/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#include "guns.hpp"

Guns::Guns(int damage):
    amountDamage(damage) {}

int Guns::getDamage() const
{
    return amountDamage;
}
