/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#ifndef NEUTRAL
#define NEUTRAL

#include "transformer.hpp"

class Neutral: public Transformer
{
    public:
        Neutral(std::string name="Anonym", int speed=20, int power=10, int quantityNC=50, int ammo=10, Guns* g=nullptr, int protection=20);
        
        int getProtection() const;
        void setProtection(int protection);
        
        void move() override;
        void transform() override;
        void escape();
        
        friend std::ostream& operator<<(std::ostream& os, const Neutral& neutral);
        
    private:
        int powerProtection;
};

#endif
