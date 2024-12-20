/* Leonid Lysenko st128618@student.spbu.ru
   Assignment5
*/

#include <gtest/gtest.h>

#include <memory>
#include <vector>

#include "autobot.hpp"
#include "decepticon.hpp"
#include "guns.hpp"

TEST(AbotTest, AbotMethods)
{
    Autobot autobot("Bumblebee", 200, 100, 500, 250, new Guns(50), "ZUZUZU");
    EXPECT_NO_THROW(autobot.transform());
    EXPECT_NO_THROW(autobot.openFire());
    EXPECT_NO_THROW(autobot.ulta());
}

TEST(DboTest, DbotMethods)
{
    Decepticon decepticon("Megatron", 300, 500, 1000, 800, new Guns(100), 50);
    EXPECT_NO_THROW(decepticon.transform());
    EXPECT_NO_THROW(decepticon.openFire());
    EXPECT_NO_THROW(decepticon.ulta());
}

TEST(TbotTest, BaseClassPointers)
{
    Transformer* A = new Autobot("A1", 20, 10, 50, 25, new Guns(10), "VoiceA");
    EXPECT_NO_THROW(A->transform());
    EXPECT_NO_THROW(A->openFire());
    EXPECT_NO_THROW(A->ulta());

    Transformer* D = new Decepticon("D1", 30, 50, 100, 80, new Guns(20), 25);
    EXPECT_NO_THROW(D->transform());
    EXPECT_NO_THROW(D->openFire());
    EXPECT_NO_THROW(D->ulta());

    delete A;
    delete D;
}

TEST(TbotTest, TbotVector)
{
    std::vector<std::unique_ptr<Transformer>> T;

    T.push_back(std::make_unique<Autobot>("Abot1", 25, 15, 45, 30, new Guns(50), "VoiceB"));
    T.push_back(std::make_unique<Decepticon>("Dbot1", 35, 55, 90, 70, new Guns(60), 20));

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

    for (const auto& transformer : T)
    {
        EXPECT_NO_THROW(transformer->transform());
        EXPECT_NO_THROW(transformer->openFire());
        EXPECT_NO_THROW(transformer->ulta());
    }
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

