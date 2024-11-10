/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>
#include "neutral.hpp"

Neutral::Neutral(std::string name, int speed, int power, int quantityNC, int ammo, Guns* g, int protection):
    Transformer(name, speed, power, quantityNC, ammo, g),
    powerProtection(protection) {}

int Neutral::getProtection() const
{
    return powerProtection;
}

void Neutral::setProtection(int protection)
{
    powerProtection = protection;
}

void Neutral::move()
{
    std::cout<<"The neutral started moving"<<'\n';
    
}

void Neutral::transform()
{
    std::cout<<"The neutral has taken on a new form"<<'\n';
}

void Neutral::escape()
{
    std::cout<<"The neutral started to escape"<<'\n';
}

std::ostream& operator<<(std::ostream& os, const Neutral& neutral)
{
   os<<static_cast<const Transformer&>(neutral)<<", Protection: "<<neutral.powerProtection;
   
   return os;
}
