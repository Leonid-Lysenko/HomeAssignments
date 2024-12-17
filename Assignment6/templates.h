/* Leonid Lysenko st128618@student.spbu.ru
   Assignment6
*/

#ifndef TEMPLATES
#define TEMPLATES

#include <iostream>
#include <vector>

template<typename X, typename Y> class TemplateClass
{
public:
    Y number;
    std::vector<float> vect;
    X value;
    TemplateClass(const Y& number, const std::vector<float>& vect, const X& value):
        number(number),
        vect(vect),
        value(value) {}

    bool foo()
    {
        return value.bar(static_cast<int>(number), vect);
    }
};

template<typename X> class TemplateClass<X, int>
{
public:
    int number;
    std::vector<float> vect;
    X value;
    TemplateClass(const int& number, const std::vector<float>& vect, const X& value):
        number(number),
        vect(vect),
        value(value) {}

    bool foo()
    {
        return true;
    }
};

template<typename X> class TemplateClass<X, double>
{
public:
    double number;
    std::vector<float> vect;
    X value;
    TemplateClass(const double& number, const std::vector<float>& vect, const X& value):
        number(number),
        vect(vect),
        value(value) {}

    bool foo()
    {
        return false;
    }
};

class Class1
{
public:
    bool bar(int number, const std::vector<float>& vect)
    {
        return (number > 0);
    }

    int c1_1()
    {
        return 1;
    }

    float c1_2()
    {
        return 1.0f;
    }

    void c1_3()
    {
        std::cout<<"first"<<std::endl;
    }
};

class Class2
{
public:
    bool bar(int number, const std::vector<float>& vect)
    {
        return !vect.empty();
    }

    int c2_1()
    {
        return 2;
    }

    float c2_2()
    {
        return 2.0f;
    }

    void c2_3()
    {
        std::cout<<"second"<<std::endl;
    }
};

class Class3
{
public:
    bool bar(int number, const std::vector<float>& vect)
    {
        return number == (-1)*(static_cast<int>(vect.size()));
    }

    int c3_1()
    {
        return 3;
    }

    float c3_2()
    {
        return 3.0f;
    }

    void c3_3()
    {
        std::cout<<"third"<<std::endl;
    }
};

#endif
