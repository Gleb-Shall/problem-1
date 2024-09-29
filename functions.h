// Поменять название файла, чтобы соответствовало названию файла, где определяется функция
// https://guiquanz.gitbooks.io/google-cc-style-guide/content/ebook/Naming.html

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <string>

using namespace std;  // Плохая практика, лучше не привыкать использовать, чтобы не засорялось пространство имен. Перепиши все через std::

void SayHello(string WordToSay);

#endif
