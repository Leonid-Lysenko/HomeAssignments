/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>
#include "guns.hpp"
#include "transformer.hpp"

Transformer::Transformer(std::string name, int speed, int power, int energy, int ammo, Guns* gun):
    roboname(name),
    robospeed(speed),
    robopower(power),
    nuclearCharge(energy),
    roboammo(ammo),
    robogun(gun) {}

Transformer::~Transformer() {}

std::string Transformer::getName()
{
    return roboname;
}

int Transformer::getSpeed() const
{
    return robospeed;
}

int Transformer::getPower() const
{
    return robopower;
}

int Transformer::getEnergy() const
{
    return nuclearCharge.getNuclearChargeCapacity();
}

int Transformer::getAmmo() const
{
    return roboammo;
}

void Transformer::shoot()
{
    if (roboammo > 0)
    {
        roboammo--;
        nuclearCharge.useCharge();
    }
}

void Transformer::fight()
{
    if (nuclearCharge.getNuclearChargeCapacity() > 0)
    {
        nuclearCharge.useCharge();
    }
}

void Transformer::move()
{
    std::cout<<"The transformer started moving"<<'\n';
}

void Transformer::transform()
{
    std::cout<<"The transformer has taken on a new form"<<'\n';
}
