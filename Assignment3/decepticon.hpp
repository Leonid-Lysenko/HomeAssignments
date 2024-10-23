/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"

class Decepticon: public Transformer
{
    public:
        Decepticon(std::string name, int speed, int power, int energy, int ammo, Guns* gun, int attack);
        
        int getAttack() const;
        void setAttack(int attack);
        
        void move() override;
        void transform() override;
        void scary();
    
    private:
        int powerAttack;
};

#endif
