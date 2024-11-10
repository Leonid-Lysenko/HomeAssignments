/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#ifndef DECEPTICON
#define DECEPTICON

#include "transformer.hpp"

class Decepticon: public Transformer
{
    public:
        Decepticon(std::string name="Anonym", int speed=20, int power=10, int quantityNC=50, int ammo=10, Guns* g=nullptr, int attack=10);
        
        int getAttack() const;
        void setAttack(int attack);
        
        void move() override;
        void transform() override;
        void scary();
        
        friend std::ostream& operator<<(std::ostream& os, const Decepticon& decepticon);
        
        bool operator>(const Decepticon& matching) const;
        bool operator<(const Decepticon& matching) const;
        bool operator==(const Decepticon& matching) const;
        
    private:
        int powerAttack;
};

#endif
