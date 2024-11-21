#ifndef TRANSFORMER
#define TRANSFORMER

#include <string>
#include "nuclearCharge.hpp"
#include "guns.hpp"

class Transformer
{
    public:
        Transformer(const std::string& name, int speed, int power, int energy, int ammo, Guns* gun);
        virtual ~Transformer();
        
        int getSpeed() const;
        int getPower() const;
        int getEnergy() const;
        int getAmmo() const;
        
        virtual void move();
        virtual void transform();
        virtual void openFire();
        virtual void ulta();
        
        void shoot();
        void fight();
    
    protected:
        std::string roboname;
        int robospeed;
        int robopower;
        int roboammo; // Declare roboammo before nuclearCharge
        Guns* robogun;
        NuclearCharge nuclearCharge; // Keep this after roboammo
};

#endif // TRANSFORMER

