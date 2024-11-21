/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#ifndef DECEPTICON
#define DECEPTICON

#include <string>
#include "transformer.hpp"

class Decepticon: public Transformer
{
    public:
        Decepticon(const std::string& name, int speed, int power, int energy, int ammo, Guns* gun, int attack);
        
        int getAttack() const;
        void setAttack(int attack);
        
        void move() override;
        void transform() override;
        void openFire() override;
        void ulta() override;
        void scary();
    
    private:
    	std::string roboname;
        int powerAttack;
};

#endif
