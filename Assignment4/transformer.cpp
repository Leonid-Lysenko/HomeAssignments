/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include "guns.hpp"
#include "transformer.hpp"

Transformer::Transformer(std::string name, int speed, int power, int quantityNC, int ammo, Guns* g):
    roboname(name),
    robospeed(speed),
    robopower(power),
    nuclearCharge(quantityNC),
    roboammo(ammo),
    gun(g) {}

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

int Transformer::getCharge() const
{
    return nuclearCharge.getCharge();
}

int Transformer::getAmmo() const
{
    return roboammo;
}

void Transformer::setName(std::string name)
{
    roboname = name;
}

void Transformer::setSpeed(int speed)
{
    robospeed = speed;
}

void Transformer::setPower(int power)
{
    robopower = power;
}

void Transformer::setCharge(int charge)
{
    nuclearCharge.setCharge(charge);
}

void Transformer::setAmmo(int ammo)
{
    roboammo = ammo;
}

std::ostream& operator<<(std::ostream& os, const Transformer& transformer)
{
    os<<
    "Name: "<<transformer.roboname<<
    ", Speed: "<<transformer.robospeed<<
    ", Power: "<<transformer.robopower<<
    ", Nuclear charge: "<<transformer.getCharge();
    
    return os;
}

bool Transformer::operator>(const Transformer& matching) const
{
    return robopower > matching.robopower;
}

bool Transformer::operator<(const Transformer& matching) const
{
    return robopower < matching.robopower;
}

bool Transformer::operator==(const Transformer& matching) const
{
    return robospeed == matching.robospeed and robopower == matching.robopower;
}

void Transformer::shoot()
{
    if (roboammo > 0)
    {
        roboammo--;
    }
}

void Transformer::fight()
{
    if (nuclearCharge.getCharge() > 0)
    {
        nuclearCharge.useCharge(1);
    }
}

void Transformer::move() {}

void Transformer::transform() {}
