# Assignment 2b
## Author
Шикунов Глеб Александрович, группа 24.Б81-мм
## Contacts
st128274@student.spbu.ru
## Description
### Home assignment 2 - processes reverse polish notation expression.
The program reads a line from the terminal and interprets it as a _reverse polish notation expression_. if you __break__ a line into several, the program will still consider it a single line.

At each step, the program receives a _value_:
* if a `number` was entered, it is __stored__ on the top of the stack;
* if an `operation` sign was entered, then 2 numbers are __popped__ from the top of the stack, after which the entered operation is __applied__ to them (the operation is defined in the function __MathematicalOpeeretion__);

after all operations are performed, our `value` is on the top of the _stack_ (where the _top pointer_ points)
## Build
```bash
make
```
## Run
```bash
./total
```
## Clear working copy
```bash
make clean
```
