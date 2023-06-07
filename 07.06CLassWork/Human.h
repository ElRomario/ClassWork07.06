#pragma once
#include <string>
#include <istream>
#include <ostream>
using namespace std;
class Human
{
private:
	string name, patronymic, surname;
public:
	Human(string name, string patronymic, string surname) : name{ name }, patronymic{ patronymic }, surname{ surname }{};
	Human() : Human(" ", " ", " ") {};

	void setName(string name) {  this ->name = name; };
	void setSurname(string surname) {  this -> surname = name; };
	void setPatronymic(string patronymic) { this ->patronymic = patronymic; };

	friend ostream& operator<<(ostream& out, const Human& human);
	friend istream& operator>>(istream& in, Human& human);



	
};

