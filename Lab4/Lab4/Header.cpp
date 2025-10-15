#include "Header.h"

Kolo::Kolo(double radius)
{
	r = radius;
}

double Kolo::Area()
{
	return PI * r * r;
}

double Kolo::Length()
{
	return 2 * PI * r;
}

PryamokytniyTrikutnyk::PryamokytniyTrikutnyk(double side_a, double side_b)
{
	a = side_a;
	b = side_b;
}

double PryamokytniyTrikutnyk::AreaPT()
{
	return a * b / 2;
}

double PryamokytniyTrikutnyk::Perimetr()
{
	return a + b + sqrt(a * a + b * b);
}

PryamokutniyTrikutnykVKoli::PryamokutniyTrikutnykVKoli(double side_a, double side_b)
	: Kolo(sqrt(side_a* side_a + side_b * side_b) / 2),
	PryamokytniyTrikutnyk(side_a, side_b)
{
}

void PryamokutniyTrikutnykVKoli::Info(ofstream & fout)
{
		fout << "������: a=" << a << ", b=" << b << endl;
		fout << "ó��������: " << sqrt(a * a + b * b) << endl;
		fout << "����� ����: " << r << endl;
		fout << "����� ����������: " << AreaPT() << endl;
		fout << "�������� ����������: " << Perimetr() << endl;
		fout << "����� ����: " << Area() << endl;
		fout << "������� ����: " << Length() << endl;
	
}

void PryamokutniyTrikutnykVKoli::Show(ostream& out)
{
	out << "������: a=" << a << ", b=" << b << endl;
		out << "ó��������: " << sqrt(a * a + b * b) << endl;
		out << "����� ����: " << r << endl;
		out << "����� ����������: " << AreaPT() << endl;
		out << "�������� ����������: " << Perimetr() << endl;
		out << "����� ����: " << Area() << endl;
		out << "������� ����: " << Length() << endl;
}

