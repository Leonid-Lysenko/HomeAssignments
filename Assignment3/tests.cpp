/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <gtest/gtest.h>

#include "autobot.hpp"
#include "decepticon.hpp"
#include "neutral.hpp"
#include "guns.hpp"

TEST(TransformerTest, fieldMethod)
{
    Guns robogun(200);
    Transformer transformer("Unknown", 100, 80, 500, 250, &robogun);
    
    EXPECT_EQ(transformer.getName(), "Unknown");
    EXPECT_EQ(transformer.getSpeed(), 100);
    EXPECT_EQ(transformer.getPower(), 80);
    EXPECT_EQ(transformer.getEnergy(), 500);
    EXPECT_EQ(transformer.getAmmo(), 250);
    
    transformer.fight();
    EXPECT_EQ(transformer.getEnergy(), 499);
    
    transformer.shoot();	
    EXPECT_EQ(transformer.getAmmo(), 249);
    EXPECT_EQ(robogun.getDamage(), 200);  
}

TEST(AutobotTest, fieldVoice)
{
    Guns robogun(500);
    Autobot autobot("Bumblebee", 200, 100, 500, 250, &robogun, "ZUZUZU");
    
    EXPECT_EQ(autobot.getName(), "Bumblebee");
    EXPECT_EQ(autobot.getSpeed(), 200);
    EXPECT_EQ(autobot.getPower(), 100);
    EXPECT_EQ(autobot.getEnergy(), 500);
    EXPECT_EQ(autobot.getAmmo(), 250);
    
    autobot.move();
    autobot.transform();
    autobot.voice();
}

TEST(DecepticonTest, fieldAttack)
{
    Guns robogun(1000);
    Decepticon decepticon("Megatron", 300, 500, 1000, 800, &robogun, 50);
    
    EXPECT_EQ(decepticon.getName(), "Megatron");
    EXPECT_EQ(decepticon.getSpeed(), 300);
    EXPECT_EQ(decepticon.getPower(), 500);
    EXPECT_EQ(decepticon.getEnergy(), 1000);
    EXPECT_EQ(decepticon.getAmmo(), 800);
    EXPECT_EQ(decepticon.getAttack(), 50);
    
    decepticon.setAttack(60);
    EXPECT_EQ(decepticon.getAttack(), 60);
    decepticon.move();
    decepticon.transform();
    decepticon.scary();
}

TEST(NeutralTest, fieldProtection)
{
    Guns robogun(0);
    Neutral neutral("Seeker", 30, 50, 40, 10, &robogun, 50);
    
    EXPECT_EQ(neutral.getName(), "Seeker");
    EXPECT_EQ(neutral.getSpeed(), 30);
    EXPECT_EQ(neutral.getPower(), 50);
    EXPECT_EQ(neutral.getEnergy(), 40);
    EXPECT_EQ(neutral.getAmmo(), 10);
    EXPECT_EQ(neutral.getProtection(), 50);
    
    neutral.setProtection(100);
    EXPECT_EQ(neutral.getProtection(), 100);
    neutral.move();
    neutral.transform();
    neutral.escape();
}

TEST(GunsTest, field)
{
    Guns robogun(100); 
    EXPECT_EQ(robogun.getDamage(), 100);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
