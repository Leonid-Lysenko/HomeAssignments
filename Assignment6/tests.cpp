/* Leonid Lysenko st128618@student.spbu.ru
   Assignment6
*/

#include "templates.h"
#include <gtest/gtest.h>



TEST(TemplateClassTest, 1ClassTrue)
{
    Class1 A;

    TemplateClass<Class1, float> object(5.0f, {}, A);

    EXPECT_TRUE(object.foo());
}



TEST(TemplateClassTest, Class1False)
{
    Class1 A;

    TemplateClass<Class1, float> object(-5.0f, {}, A);

    EXPECT_FALSE(object.foo());
}



TEST(TemplateClassTest, 2ClassTrue)
{
    Class2 A;

    std::vector<float> vect= {5.0f, 10.0f};

    TemplateClass<Class2, float> object(0.0f, vect, A);

    EXPECT_TRUE(object.foo());
}



TEST(TemplateClassTest, 2ClassFalse)
{
    Class2 A;

    std::vector<float> vect;

    TemplateClass<Class2, float> object(0.0f, vect, A);

    EXPECT_FALSE(object.foo());
}



TEST(TemplateClassTest, 3ClassTrue)
{
    Class3 A;

    std::vector<float> vect= {1.0f, 2.0f};

    TemplateClass<Class3, float> object(-2.0f, vect, A);

    EXPECT_TRUE(object.foo());
}



TEST(TemplateClassTest, 3ClassFalse)
{
    Class3 A;

    std::vector<float> vect= {6.0f, 7.0f};

    TemplateClass<Class3, float> object(9.0f, vect, A);

    EXPECT_FALSE(object.foo());
}

TEST(SpecializationTest, True)
{
    Class1 A;

    std::vector<float> vect= {1.0f, 2.0f};

    TemplateClass<Class1, int> object(13, vect, A);

    EXPECT_TRUE(object.foo());
}



TEST(SpecializationTest, False)
{
    Class1 A;

    std::vector<float> vect= {1.0f, 2.0f};

    TemplateClass<Class1, double> object(13.13, vect, A);

    EXPECT_FALSE(object.foo());
}



int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
