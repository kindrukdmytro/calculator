#include "calculator.h"

int Calculator::Add (double a, double b)
{
// коментар
// ця функція використовує округлення
// це запобігає усіченню
// змушує вирази типу Add(4.9, 4.9) повертати 10 замість 9.
// пояснень достатньо :)
    return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
