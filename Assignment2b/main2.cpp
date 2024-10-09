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
    double *k = n;
    for (int i {0}; i < stroka.length(); i++)
    {
        /*
        We prescribe conditions for operation signs (+, -, *, /).
        */
        switch (stroka[i])
        {
            case '+':
                *(k-2) = *(k-2) + *(k-1);
                k--;
                i++;
                break;
            case '-':
                *(k-2) = *(k-2) - *(k-1);
                k--;
                i++;
                break;
            case '*':
                *(k-2) = *(k-2) * *(k-1);
                k--;
                i++;
                break;
            case '/':
                *(k-2) = *(k-2) / *(k-1);
                k--;
                i++;
                break;
            default:
                std::string chislo;
                while (stroka[i] != ' ')
                {
                    chislo += stroka[i];
                    i++;
                }
                *k = stod(chislo);
                k++;
        }
    }
    /*
    We move the pointer to the left so that the program works correctly,
    and then we display the result of the program.
    After this, we clear the memory.
    */
    k--;
    std::cout << *k << std::endl;
    delete[] n;
}
