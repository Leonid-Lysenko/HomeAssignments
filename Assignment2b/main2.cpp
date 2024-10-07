/* Leonid Lysenko st128618@student.spbu.ru
   Assignment2b
*/

#include <iostream>
int main()
{
    /*
    We create a string and enter numbers and operation signs into it.
    */
    std::string stroka;
    std::getline(std::cin, stroka);
    double *n = new double[stroka.length()];
    for (int i = 0; i < stroka.length(); i++)
    {
        /*
        We prescribe conditions for operation signs (+, -, *, /).
        */
        switch (stroka[i])
        {
            case '+':
                *(n-2) = *(n-2) + *(n-1);
                n--;
                i++;
                break;
            case '-':
                *(n-2) = *(n-2) - *(n-1);
                n--;
                i++;
                break;
            case '*':
                *(n-2) = *(n-2) * *(n-1);
                n--;
                i++;
                break;
            case '/':
                *(n-2) = *(n-2) / *(n-1);
                n--;
                i++;
                break;
            default:
                std::string chislo;
                while (stroka[i] != ' ')
                {
                    chislo += stroka[i];
                    i++;
                }
                *n = stod(chislo);
                n++;
        }
    }
    /*
    We move the pointer to the left so that the program works correctly,
    and then we display the result of the program.
    After this, we clear the memory.
    */
    n--;
    std::cout << *(n) << std::endl;
    delete[] n;
}
