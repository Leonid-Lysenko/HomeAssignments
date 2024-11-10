/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>
#include "autobot.hpp"

Autobot::Autobot(std::string name, int speed, int power, int quantityNC, int ammo, Guns* g, std::string voice):
    Transformer(name, speed, power, quantityNC, ammo, g),
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

std::ostream& operator<<(std::ostream& os, const Autobot& autobot)
{
   os<<static_cast<const Transformer&>(autobot)<< ", War cry: "<<autobot.warCry;
   
   return os;
}
