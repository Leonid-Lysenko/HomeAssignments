/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#include <string>
#include <iostream>
#include "transformer.hpp"

Transformer::Transformer(const std::string& name, int speed, int power, int energy, int ammo, Guns* gun):
    roboname(name),
    robospeed(speed),
    robopower(power),
    roboammo(ammo),
    robogun(gun),
    nuclearCharge(energy) {}

Transformer::~Transformer() {}

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
        std::cout << "Shot fired! Remaining ammo: " << roboammo << '\n';
    }
    else
    {
        std::cout << "Out of ammo!" << '\n';
    }
}

void Transformer::fight()
{
    if (nuclearCharge.getNuclearChargeCapacity() > 0)
    {
        nuclearCharge.useCharge();
        std::cout << "Fighting with nuclear charge!" << '\n';
    }
    else
    {
        std::cout << "No nuclear charge left!" << '\n';
    }
}

void Transformer::move()
{
    std::cout << "The transformer started moving!" << '\n';
}

void Transformer::transform()
{
    std::cout << "The transformer " << roboname << " has taken on a new form!" << '\n';
}

void Transformer::openFire()
{
    std::cout << "The transformer " << roboname << " opened fire!" << '\n';
}

void Transformer::ulta()
{
    std::cout << "The transformer " << roboname << " applied super blow!" << '\n';
}
