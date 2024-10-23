/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#ifndef GUNS
#define GUNS

class Guns
{
    public:
        Guns(int damage);
        
        int getDamage() const;
    
    private:
        int amountDamage;
};

#endif
