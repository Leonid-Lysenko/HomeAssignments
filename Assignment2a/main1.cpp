/* Leonid Lysenko st128618@student.spbu.ru
   Assignment2a
*/

#include <filesystem>
#include <fstream>
#include <iostream>

int main()
{
    /*
    We create an array to work with it.
    */
    unsigned fileSize = std::filesystem::file_size("source");
    char* buffer = new char[fileSize];
    std::ifstream infile;
    infile.open("source", std::ios::binary | std::ios::in);
    /*
    We read the file to work with it.
    */
    int Fsize = 0;
    char ch;
    while (infile.get(ch))
    {
        buffer[Fsize] = ch;
        Fsize++;
    }
    Fsize--;
    infile.close();
    /*
    We reverse the line elements in the file.
    */
    for (int i {0}; i < Fsize / 2; i++)
    {
        std::swap(buffer[i], buffer[Fsize - (i+1)]);
    }
    /*
    We write the reversed string to a new file.
    */
    std::ofstream outfile;
    outfile.open("temppdf", std::ios::binary | std::ios::out);
    outfile.write((char *)buffer, Fsize * sizeof(buffer[0]));
    outfile.close();
    /*
    We perform memory cleaning.
    */
    delete[] buffer;
}
