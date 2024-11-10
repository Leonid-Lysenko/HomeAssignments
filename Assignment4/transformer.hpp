/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>
#include <memory>

#ifndef TRANSFORMER
#define TRANSFORMER

#include "nuclearCharge.hpp"

class Guns;

class Transformer
{
    public:
        Transformer(std::string name="Anonym", int speed=20, int power=10, int quantityNC=50, int ammo=10, Guns* g=nullptr);
        virtual ~Transformer();
        
        std::string getName();
        int getSpeed() const;
        int getPower() const;
        int getCharge() const;
        int getAmmo() const;
        
        void setName(std::string name);
        void setSpeed(int speed);
        void setPower(int power);
        void setCharge(int charge);
        void setAmmo(int ammo);
        
        friend std::ostream& operator<<(std::ostream& os, const Transformer& transformer);
        
        bool operator>(const Transformer& matching) const;
        bool operator<(const Transformer& matching) const;
        bool operator==(const Transformer& matching) const;
        
        virtual void move();
        virtual void transform();
        
        void shoot();
        void fight();
    
    protected:
        std::string roboname;
        int robospeed;
        int robopower;
        NuclearCharge nuclearCharge;
        int roboammo;
        std::unique_ptr<Guns> gun;
};

#endif
