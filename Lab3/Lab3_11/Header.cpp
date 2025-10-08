#include "Header.h"

Pryamokutnyk::Pryamokutnyk()
{
	a = 1.0;
	b = 1.0;
}

Pryamokutnyk::Pryamokutnyk(double sideA, double sideB)
{
	a = sideA;
	b = sideB;
}

Pryamokutnyk& Pryamokutnyk::operator++()
{
	a++;
	b++;
	return *this;
}

Pryamokutnyk& Pryamokutnyk::operator--()
{
	if (a > 1) a--;
	if (b > 1) b--;
	return *this;
}

double Pryamokutnyk::getSideA() const
{
	return a;
}

double Pryamokutnyk::getSideB() const
{
	return b;
}

double Pryamokutnyk::getDiagonal() const
{
	return sqrt(a * a + b * b);
}

double Pryamokutnyk::getPerimeter() const
{
	return 2 * (a + b);
}

double Pryamokutnyk::getArea() const
{
	return a * b;
}

double Pryamokutnyk::getArea(double scale)
{
	return (a * scale) * (b * scale);
}

void Pryamokutnyk::showInfo() const
{
	cout << "�����������:" << endl;
	cout << "������� A: " << a << endl;
	cout << "������� B: " << b << endl;
	cout << "ĳ�������: " << getDiagonal() << endl;
	cout << "��������: " << getPerimeter() << endl;
	cout << "�����: " << getArea() << endl;
}

void Pryamokutnyk::showInfo(string name)
{
	cout << "Գ����: " << name << endl;
	showInfo();
}
