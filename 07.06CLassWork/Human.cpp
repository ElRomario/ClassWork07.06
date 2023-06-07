#include "Human.h"
#include <istream>
#include <iostream>
#include <ostream>
using namespace std;

ostream& operator<<(ostream& out, const Human& human)
{
    out << "Name: " << human << "Patronymic: " << human << "Surname: " << human;
    return out;
}

istream& operator>>(istream& in, Human& human)
{
    
    return in >> human.name >> human.surname >> human.patronymic;
}
