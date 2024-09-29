/* Gleb Shikunov st128274@student.spbu.ru
   problem 1
*/

#include "functions.h"
#include <iostream>	// Подключение библиотек перенести в хэдер, тогда здесь не придется их еще раз подключать
#include <string>	// и хватит подключения только хэдера

using namespace std;	// Тоже убираем

void SayHello(string WordToSay)
{
	cout << "Hello, " << WordToSay << "!" << endl;
}
