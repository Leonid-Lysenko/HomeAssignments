/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <iostream>

#ifndef NUCLEAR_CHARGE
#define NUCLEAR_CHARGE

class NuclearCharge
{
    public:
        NuclearCharge(int capacity=50):
            charge(capacity) {}
        
        int getCharge() const
        {
            return charge;
        }
        
        void setCharge(int nuclearChargeCapacity)
        {
            charge = nuclearChargeCapacity;
        }
        void useCharge(int amt)
        {
            if (charge >= amt)
            {
                charge -= amt;
            }
        }
        
        friend std::ostream& operator<<(std::ostream& os, const NuclearCharge& nuch)
        {
            os<<"Capacity of nuclear charge: "<<nuch.charge;
            
            return os;
        }
        
        bool operator>(const NuclearCharge& matching) const
	{
	    return charge > matching.charge;
	}

	bool operator<(const NuclearCharge& matching) const
	{
	    return charge < matching.charge;
	}

	bool operator==(const NuclearCharge& matching) const
	{
	    return charge == matching.charge;
	}
   
    
    private:
        int charge;
};

#endif
