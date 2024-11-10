/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>
#include "decepticon.hpp"

Decepticon::Decepticon(std::string name, int speed, int power, int quantityNC, int ammo, Guns* g, int attack):
    Transformer(name, speed, power, quantityNC, ammo, g),
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

std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon)
{
   os<<static_cast<const Transformer&>(decepticon)<<", Power of attack: "<<decepticon.powerAttack;
   
   return os;
}

bool Decepticon::operator>(const Decepticon& matching) const
{
    return powerAttack > matching.powerAttack;
}

bool Decepticon::operator<(const Decepticon& matching) const
{
    return powerAttack < matching.powerAttack;
}

bool Decepticon::operator==(const Decepticon& matching) const
{
    return powerAttack == matching.powerAttack;
}
