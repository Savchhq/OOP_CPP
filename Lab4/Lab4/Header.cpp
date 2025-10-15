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
		fout << "Катети: a=" << a << ", b=" << b << endl;
		fout << "Гіпотенуза: " << sqrt(a * a + b * b) << endl;
		fout << "Радіус кола: " << r << endl;
		fout << "Площа трикутника: " << AreaPT() << endl;
		fout << "Периметр трикутника: " << Perimetr() << endl;
		fout << "Площа кола: " << Area() << endl;
		fout << "Довжина кола: " << Length() << endl;
	
}

void PryamokutniyTrikutnykVKoli::Show(ostream& out)
{
	out << "Катети: a=" << a << ", b=" << b << endl;
		out << "Гіпотенуза: " << sqrt(a * a + b * b) << endl;
		out << "Радіус кола: " << r << endl;
		out << "Площа трикутника: " << AreaPT() << endl;
		out << "Периметр трикутника: " << Perimetr() << endl;
		out << "Площа кола: " << Area() << endl;
		out << "Довжина кола: " << Length() << endl;
}

