/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#ifndef NEUTRAL
#define NEUTRAL

#include "transformer.hpp"

class Neutral: public Transformer
{
    public:
        Neutral(std::string name, int speed, int power, int energy, int ammo, Guns* gun, int protection);
        
        int getProtection() const;
        void setProtection(int protection);
        
        void move() override;
        void transform() override;
        void escape();
    
    private:
        int powerProtection;
};

#endif
