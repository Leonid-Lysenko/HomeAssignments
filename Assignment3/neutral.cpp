/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>
#include "neutral.hpp"

Neutral::Neutral(std::string name, int speed, int power, int energy, int ammo, Guns* gun, int protection):
    Transformer(name, speed, power, energy, ammo, gun),
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
