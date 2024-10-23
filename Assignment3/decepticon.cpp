/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>
#include "decepticon.hpp"

Decepticon::Decepticon(std::string name, int speed, int power, int energy, int ammo, Guns* gun, int attack):
    Transformer(name, speed, power, energy, ammo, gun),
    powerAttack(attack) {}

int Decepticon::getAttack() const
{
    return powerAttack;
}

void Decepticon::setAttack(int attack)
{
    powerAttack = attack;
}

void Decepticon::move()
{
    std::cout<<"The decepticon started moving"<<'\n';
    
}

void Decepticon::transform()
{
    std::cout<<"The decepticon has taken on a new form"<<'\n';
}

void Decepticon::scary()
{
    std::cout<<"The decepticon started to scare"<<'\n';
}
