#pragma once
#include <iostream>
#include <string>

using namespace std;

class Mammal {
	string kind;
	int age;
public:
	Mammal();
	Mammal(int age, string kind);

	 void setKind(string kind);
	 void setAge(int age);

	 string getKind();
	 int getAge();
	 virtual void printInfo();
};

class Animal : public Mammal {
	float weight;
public:
	Animal();
	Animal(string kind, float weight, int age);
	
	void setWeight(float weight);

	float getWeight();
	void printInfo() override;

};

class Human : public Mammal {
	string fullName;
	string phoneNum;

	void setKind(string) = delete;
	string getKind() = delete;

public:
	Human();
	Human(string fullName, string phoneNum, int age);
	void setfullName(string fullName);
	void setphoneNum(string phoneNum);

	string getFullName();
	string getPhoneNum();

	void printInfo() override;
};

class Horse : public Animal {

};

class Cow : public Animal {

};

void menu();