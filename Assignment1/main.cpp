/* Gleb Shikunov
   st128274@student.spbu.ru
   Assignment 1
*/


#include "sayhello.h"


int main(int arg, char *argv[])
{
    std::cout << "Чтобы закончить выполнение программы, введите 'q' / 'quit' / 'stop' + Enter" << "\n";
    std::string WordToSay = "world";
    while ((WordToSay != "q") && (WordToSay != "quit") && (WordToSay != "stop"))
    {
        SayHello(WordToSay);
        std::cin >> WordToSay;
    }
}
