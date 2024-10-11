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
    unsigned fileSize = std::filesystem::file_size("source")-1;
    char* buffer = new char[fileSize];
    std::ifstream infile;
    infile.open("source", std::ios::binary | std::ios::in);
    /*
    We read the file to work with it.
    */
    infile.read(buffer, fileSize);
    infile.close();
    /*
    We reverse the line elements in the file.
    */
    for (int i {0}; i < fileSize / 2; i++)
    {
        std::swap(buffer[i], buffer[fileSize - (i+1)]);
    }
    /*
    We write the reversed string to a new file.
    */
    std::ofstream outfile;
    outfile.open("temppdf", std::ios::binary | std::ios::out);
    outfile.write((char *)buffer, fileSize * sizeof(buffer[0]));
    outfile.close();
    /*
    We perform memory cleaning.
    */
    delete[] buffer;
}
