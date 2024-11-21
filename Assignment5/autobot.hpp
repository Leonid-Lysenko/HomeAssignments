/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#ifndef AUTOBOT
#define AUTOBOT

#include <string>
#include "transformer.hpp"

class Autobot: public Transformer
{
    public:
        Autobot(const std::string& name, int speed, int power, int energy, int ammo, Guns* gun, std::string voice);
        
        void move() override;
        void transform() override;
        void openFire() override;
        void ulta() override;
        void voice();
    
    private:
        std::string roboname;
        std::string warCry;
};

#endif
