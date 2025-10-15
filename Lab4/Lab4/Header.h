#pragma once
#include <iostream>
#include <fstream>
#include <fstream>
const double PI = 3.141592653589793;
using namespace std;

class Kolo {
public:
	double r;
	Kolo(double radius);

	double Area();
	double Length();
};

class PryamokytniyTrikutnyk {
public:
	double a, b;
	PryamokytniyTrikutnyk(double side_a, double side_b);

	double AreaPT();
	double Perimetr();

};

class PryamokutniyTrikutnykVKoli : public Kolo, public PryamokytniyTrikutnyk {
	public:
		PryamokutniyTrikutnykVKoli(double side_a, double side_b);
		void Info(ofstream& fout);
		void Show(ostream& out);
};
