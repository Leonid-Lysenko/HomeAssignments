/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include<iostream>
#ifndef GUNS
#define GUNS

class Guns
{
    public:
        Guns(int damage = 5);
        int getDamage() const;
        void setDamage(int damage);
        
        friend std::ostream& operator<<(std::ostream& os, const Guns& gun);
        
        bool operator>(const Guns& matching) const;
        bool operator<(const Guns& matching) const;
        bool operator==(const Guns& matching) const;

    private:
        int amountDamage;
};
#endif
