/* Leonid Lysenko st128618@student.spbu.ru
   Assignment3
*/

#include <gtest/gtest.h>

#include "autobot.hpp"
#include "decepticon.hpp"
#include "neutral.hpp"
#include "guns.hpp"

TEST(TransformerTest, operators)
{
    auto gunOne = std::make_unique<Guns>(30);
    Transformer a("Unknown", 50, 30, 100, 80, gunOne.release());
    
    auto gunTwo = std::make_unique<Guns>(15);
    Transformer b("Unknown", 30, 15, 70, 50, gunTwo.release());
    
    EXPECT_TRUE(a > b);
    EXPECT_FALSE(a < b);
    EXPECT_FALSE(a == b);
}


TEST(TransformerTest, methods)
{
    auto gun = std::make_unique<Guns>(10);
    Transformer transformer("Unknown", 100, 80, 500, 250, gun.release());
    EXPECT_EQ(transformer.getName(), "Unknown");
    EXPECT_EQ(transformer.getSpeed(), 100);
    EXPECT_EQ(transformer.getPower(), 80);
    EXPECT_EQ(transformer.getCharge(), 500);
    EXPECT_EQ(transformer.getAmmo(), 250);
    
    transformer.fight();
    EXPECT_EQ(transformer.getCharge(), 499);
    
    transformer.shoot();	
    EXPECT_EQ(transformer.getAmmo(), 249);
}

TEST(AutobotTest, fieldVoice)
{
    auto gun = std::make_unique<Guns>(10);
    Guns robogun(500);
    Autobot autobot("Bumblebee", 200, 100, 500, 250, gun.release(), "ZUZUZU");
    
    std::ostringstream output;
    std::streambuf* pastbuf = std::cout.rdbuf(output.rdbuf());
    
    autobot.move();
    std::cout.rdbuf(pastbuf);
    
    EXPECT_EQ(output.str(), "The autobot started moving\n");
    output.str("");
    
    std::cout.rdbuf(output.rdbuf());
    
    autobot.transform();
    std::cout.rdbuf(pastbuf);
    
    EXPECT_EQ(output.str(), "The autobot has taken on a new form\n");
    output.str("");
    
    std::cout.rdbuf(output.rdbuf());
    
    autobot.voice();
    std::cout.rdbuf(pastbuf);
    
    EXPECT_EQ(output.str(), "The autobot shouted: ZUZUZU\n");
    output.str("");
    
    output << autobot;
    EXPECT_NE(output.str().find("War cry: ZUZUZU"), std::string::npos);
}

TEST(DecepticonTest, fieldAttack)
{
    auto gun = std::make_unique<Guns>(10);
    Decepticon decepticon("Megatron", 300, 500, 1000, 800, gun.release(), 50);
    EXPECT_EQ(decepticon.getAttack(), 50);
    
    decepticon.setAttack(100);
    EXPECT_EQ(decepticon.getAttack(), 100);
    
    std::ostringstream output;
    std::streambuf* pastbuf = std::cout.rdbuf(output.rdbuf());
    
    decepticon.move();
    std::cout.rdbuf(pastbuf);
    
    EXPECT_EQ(output.str(), "The decepticon started moving\n");
    output.str("");
    
    std::cout.rdbuf(output.rdbuf());
    
    decepticon.transform();
    std::cout.rdbuf(pastbuf);
    
    EXPECT_EQ(output.str(), "The decepticon has taken on a new form\n");
    output.str("");
    
    std::cout.rdbuf(output.rdbuf());
    
    decepticon.scary();
    std::cout.rdbuf(pastbuf);
    
    EXPECT_EQ(output.str(), "The decepticon started to scare\n");
    output.str("");
    
    output<<decepticon;
    EXPECT_NE(output.str().find("Power of attack: 100"), std::string::npos);
}

TEST(NeutralTest, fieldProtection)
{
    auto gun = std::make_unique<Guns>(10);
    Neutral neutral("Seeker", 30, 50, 40, 10, gun.release(), 50);
    EXPECT_EQ(neutral.getProtection(), 50);
    
    neutral.setProtection(80);
    EXPECT_EQ(neutral.getProtection(), 80);
    
    std::ostringstream output;
    std::streambuf* pastbuf = std::cout.rdbuf(output.rdbuf());
    
    neutral.move();
    std::cout.rdbuf(pastbuf);
    
    EXPECT_EQ(output.str(), "The neutral started moving\n");
    output.str("");
    
    std::cout.rdbuf(output.rdbuf());
    
    neutral.transform();
    std::cout.rdbuf(pastbuf);
    
    EXPECT_EQ(output.str(), "The neutral has taken on a new form\n");
    output.str("");
    
    output<<neutral;
    EXPECT_NE(output.str().find("Protection: 80"), std::string::npos);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}