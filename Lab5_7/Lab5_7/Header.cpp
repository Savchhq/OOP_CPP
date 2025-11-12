#include "Header.h"

Mammal::Mammal() : kind(""), age(0) {}
Mammal::Mammal(int age, string kind) : kind(kind), age(age) {}

void Mammal::setKind(string kind)
{
    this->kind= kind;
}

void Mammal::setAge(int age)
{
    this->age = age;
}

string Mammal::getKind()
{
    return kind;
}

int Mammal::getAge()
{
    return age;
}

void Mammal::printInfo()
{
    cout << "Info:\n";
    cout << "Kind: " << kind << endl;
    cout << "Age: " << age << endl;
}

Animal::Animal() : Mammal(), weight(0.0f) {}
Animal::Animal(string kind, float weight, int age)
    : Mammal(age, kind), weight(weight) {
}

void Animal::setWeight(float weight)
{
    this->weight = weight;
}

float Animal::getWeight()
{
    return weight;
}

void Animal::printInfo()
{
    cout << "Info:\n";
    cout << "Kind: " << getKind() << endl;
    cout << "Weight: " << weight << endl;
    cout << "Age: " << getAge() << endl;
}

Human::Human() : Mammal(), fullName(""), phoneNum("") {}

Human::Human(string fullName, string phoneNum, int age)
    : Mammal(age, "Human"), fullName(fullName), phoneNum(phoneNum) {
}

void Human::setfullName(string fullName)
{
    this->fullName = fullName;
}

void Human::setphoneNum(string phoneNum)
{
    this->phoneNum = phoneNum;
}

string Human::getFullName()
{
    return fullName;
}

string Human::getPhoneNum()
{
    return phoneNum;
}

void Human::printInfo()
{
    cout << "Info:\n";
    cout << "Name: " << fullName << endl;
    cout << "Phone Number: " << phoneNum << endl;
    cout << "Age: " << getAge() << endl;
}

void menu()
{
    cout << "\nMenu:\n\t1. Add human of list.\n\t2. Add animal of list.\n\t3. Show list of humans.\n\t4. Show list of Animals.\n\t3. Exit.\n";
}

