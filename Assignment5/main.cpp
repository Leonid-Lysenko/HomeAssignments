/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#include <string>
#include <vector>
#include <memory>
#include <iostream>
#include "autobot.hpp"
#include "decepticon.hpp"
#include "guns.hpp"

int main()
{
    // Create Autobots and Decepticons
    Autobot autobot("Bumblebee", 200, 100, 500, 250, new Guns(50), "ZUZUZU");
    
    autobot.transform();
    autobot.openFire();
    autobot.ulta();
    
    Decepticon decepticon("Megatron", 300, 500, 1000, 800, new Guns(100), 50);
    
    decepticon.transform();
    decepticon.openFire();
    decepticon.ulta();
    
    // Create Transformers using base class pointers
    Transformer* A = new Autobot("A1", 20, 10, 50, 25, new Guns(10), "VoiceA");
    
    A->transform();
    A->openFire();
    A->ulta();
    
    Transformer* D = new Decepticon("D1", 30, 50, 100, 80, new Guns(20), 25);
    
    D->transform();
    D->openFire();
    D->ulta();
    
    // Correct vector declaration
    std::vector<std::unique_ptr<Transformer>> T;

    // Add Autobots and Decepticons to the vector
    T.push_back(std::make_unique<Autobot>("Abot1", 25, 15, 45, 30, new Guns(50), "VoiceB"));
    T.push_back(std::make_unique<Decepticon>("Dbot1", 35, 55, 90, 70, new Guns(60), 20));
    
    // Create additional Transformers dynamically
    for (int n = 0; n < 2; ++n)
    {
        T.push_back(std::make_unique<Autobot>("Abot2" + std::to_string(5 + n), 
                                                25 + 2 * n,
                                                15 + 3 * n,
                                                45 + 4 * n,
                                                30 + 5 * n,
                                                new Guns(50),
                                                "VoiceC" + std::to_string(n)));
        T.push_back(std::make_unique<Decepticon>("Dbot2" + std::to_string(7 + n), 
                                                  35 + 7 * n,
                                                  55 + 8 * n,
                                                  90 + 9 * n,
                                                  70 + 10 * n,
                                                  new Guns(60),
                                                  (20 + 11 * n)));
        T.push_back(std::make_unique<Transformer>("Tbot2" + std::to_string(9 + n), 
                                                   20 + 12 * n,
                                                   30 + 13 * n,
                                                   40 + 14 * n,
                                                   25 + 15 * n,
                                                   new Guns(50)));
    }
    
    // Iterate through the vector and call methods on each Transformer
    for (const auto& transformer : T)
    {
        transformer->transform(); 
        transformer->openFire();   
        transformer->ulta();       
    }
    
    delete A; 
    delete D;
    
    return 0;
}

