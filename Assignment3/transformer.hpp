/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#ifndef TRANSFORMER
#define TRANSFORMER

#include "nuclearCharge.hpp"
#include "guns.hpp"

class Transformer
{
    public:
        Transformer(std::string name, int speed, int power, int energy, int ammo, Guns* gun);
        virtual ~Transformer();
        
        std::string getName();
        int getSpeed() const;
        int getPower() const;
        int getEnergy() const;
        int getAmmo() const;
        
        virtual void move();
        virtual void transform();
        
        void shoot();
        void fight();
    
    protected:
        std::string roboname;
        int robospeed;
        int robopower;
        int roboammo;
        Guns* robogun;
        NuclearCharge nuclearCharge;
};

#endif
