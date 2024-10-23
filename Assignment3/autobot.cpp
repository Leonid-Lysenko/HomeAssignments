/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>
#include "autobot.hpp"

Autobot::Autobot(std::string name, int speed, int power, int energy, int ammo, Guns* gun, std::string voice):
    Transformer(name, speed, power, energy, ammo, gun),
    warCry(voice) {}

void Autobot::move()
{
    std::cout<<"The autobot started moving"<<'\n';
    
}

void Autobot::transform()
{
    std::cout<<"The autobot has taken on a new form"<<'\n';
}

void Autobot::voice()
{
    std::cout<<"The autobot shouted: "<< warCry <<'\n';
}
