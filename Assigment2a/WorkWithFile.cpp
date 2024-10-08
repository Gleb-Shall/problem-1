/* Gleb Shikunov
   st128274@student.spbu.ru
   Assignment 2
*/


#include "WorkWithFile.h"


void WorkWithFile()
{
    int sizeFile = std::filesystem::file_size("source");
    char* buffer = new char[sizeFile];
    std::ifstream infile;
    infile.open("source", std::ios::binary|std::ios::in);
    std::ofstream outfile;
    outfile.open("temp", std::ios::binary|std::ios::out);
    char* temp = new char[sizeFile];

    infile.read(buffer, sizeFile);
    for (int i = 0; i < sizeFile; ++i)
    {
        temp[i] = buffer[(sizeFile - 1) - i];
    }
    outfile.write(temp, sizeFile);
    infile.close();
    outfile.close();
    delete [] buffer;
    delete [] temp;
}
