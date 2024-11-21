/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#ifndef NUCLEAR_CHARGE
#define NUCLEAR_CHARGE

class NuclearCharge
{
    public:
        NuclearCharge(int capacity):
            nuclearChargeCapacity(capacity) {}
        
        void useCharge()
        {
            if (nuclearChargeCapacity > 0)
            {
                nuclearChargeCapacity--;
            }
        }
        
        int getNuclearChargeCapacity() const
        {
            return nuclearChargeCapacity;
        }
    
    private:
        int nuclearChargeCapacity;
};

#endif
