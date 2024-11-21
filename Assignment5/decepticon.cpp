/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#include <string>
#include <iostream>
#include "decepticon.hpp"

Decepticon::Decepticon(const std::string& name, int speed, int power, int energy, int ammo, Guns* gun, int attack):
    Transformer(name, speed, power, energy, ammo, gun),
    roboname(name),
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
    std::cout<<"The decepticon started moving!"<<'\n';
    
}

void Decepticon::transform()
{
    std::cout<<"The decepticon "<<roboname<<" has taken on a new form!"<<'\n';
}

void Decepticon::openFire()
{
    std::cout<<"The decepticon "<<roboname<<" opened fire!"<<'\n';
}

void Decepticon::ulta()
{
    std::cout<<"The autobot "<<roboname<<" applied super blow!"<<'\n';
}

void Decepticon::scary()
{
    std::cout<<"The decepticon started to scare!"<<'\n';
}
