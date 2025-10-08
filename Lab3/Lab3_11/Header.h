	#pragma once
	#include <iostream>

	using namespace std;

	class Pryamokutnyk {
	private:
		double a;
		double b;

	public:
		Pryamokutnyk();
		Pryamokutnyk(double sideA, double sideB);
		Pryamokutnyk& operator++();
		Pryamokutnyk& operator--();
		double getSideA() const;
		double getSideB() const;	
		double getDiagonal() const;
		double getPerimeter() const;
		double getArea() const;
		double getArea(double scale);
		void showInfo() const;
		void showInfo(string name);


	};