/* Leonid Lysenko st128618@student.spbu.ru
   problem-1 project
*/

#include <iostream>
#include <string>

void hello_friend()
{
	std::cout << "Hello, World!" << std::endl;
	std::string name;
	while (true)
	{
		getline(std::cin, name);
		std::cout << "Hello, " << name << "! You're wonderful person ;)" << std::endl;
	}
}
