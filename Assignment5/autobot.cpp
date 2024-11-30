/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#include <string>
#include <iostream>
#include "autobot.hpp"

Autobot::Autobot(const std::string& name, int speed, int power, int energy, int ammo, Guns* gun, std::string voice):
    Transformer(name, speed, power, energy, ammo, gun),
    roboname(name),
    warCry(voice) {}

void Autobot::move()
{
    std::cout<<"The autobot started moving!"<<'\n';
}

void Autobot::transform()
{
    std::cout<<"The autobot "<<roboname<<" has taken on a new form!"<<'\n';
}

void Autobot::openFire()
{
    std::cout<<"The autobot "<<roboname<<" opened fire!"<<'\n';
}

void Autobot::ulta()
{
    std::cout<<"The autobot "<<roboname<<" applied super blow!"<<'\n';
}

void Autobot::voice()
{
    std::cout<<"The autobot shouted: "<< warCry <<'\n';
}
