/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#ifndef AUTOBOT
#define AUTOBOT

#include "transformer.hpp"

class Autobot: public Transformer
{
    public:
        Autobot(std::string name, int speed, int power, int energy, int ammo, Guns* gun, std::string voice);
        
        void move() override;
        void transform() override;
        void voice();
    
    private:
        
        std::string warCry;
        
};

#endif
