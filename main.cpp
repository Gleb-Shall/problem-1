/* Gleb Shikunov st128274@student.spbu.ru
   problem №1
*/

#include "functions.h"
#include <iostream>	// Перенести в хэдер
#include <string>	//

using namespace std;	// Не используем

int main(int arg, char *argv[])
{
	cout << "Чтобы закончить выполнение программы, введите 'q' / 'quit' / 'stop' + Enter" << endl;
	string WordToSay = "world";
	while ((WordToSay != "q") && (WordToSay != "quit") && (WordToSay != "stop"))
	{
		SayHello(WordToSay);
		cin >> WordToSay;
	}
}
