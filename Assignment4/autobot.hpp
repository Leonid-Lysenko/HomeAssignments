/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#ifndef AUTOBOT
#define AUTOBOT

#include "transformer.hpp"

class Autobot: public Transformer
{
    public:
        Autobot(std::string name="Anonym", int speed=20, int power=10, int quantityNC=50, int ammo=10, Guns* g=nullptr, std::string voice="Zazaza");
        
        void move() override;
        void transform() override;
        void voice();
        
        friend std::ostream& operator<<(std::ostream& os, const Autobot& autobot);
    
    private:
        std::string warCry;
        
};

#endif
