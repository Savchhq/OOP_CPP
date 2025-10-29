#include <iostream>
#include <Windows.h>

const double M_PI = 3.14159265358979323846;

class Circle {
protected:
	double radius;
public:
	Circle(double r = 1.0) : radius(r) {}
   double setRadius(double r) {
        radius = r;
        return radius;
	}
    double getLength() {
        return 2 * M_PI * radius;
    }
    virtual void show() {
        std::cout << "Довжина кола: " << getLength() << std::endl;
    }
};

class Disk : public Circle {
public:
    Disk(double r = 1.0) : Circle(r) {}

    double getArea() {
        return M_PI * radius * radius;
    }

    void show() override {
        std::cout << "Площа круга: " << getArea() << std::endl;
    }
};

class Cylinder : public Disk {
    double height;
public:
    Cylinder(double r = 1.0, double h = 1.0) : Disk(r), height(h) {}
    
    double setHeight(double h) {
        height = h;
        return height;
	}

    virtual double getVolume() {
        return M_PI * radius * radius * height;
    }

    void show() override {
        std::cout << "Об’єм циліндра: " << getVolume() << std::endl;
    }
};

int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

	Circle* obj;

	/*Circle circle(5);
	Disk disk(3);
	Cylinder cylinder(2, 4);

	obj = &circle;
	obj->show();
	obj = &disk;
	obj->show();
	obj = &cylinder;
	obj->show();
    */

    Circle circle;
    Disk disk;
    Cylinder cylinder;
	double r, h;

	std::cout << "Введіть радіус кола: ";
	std::cin >> r;
	circle.setRadius(r);
	obj = &circle;
	obj->show();

	std::cout << "Введіть радіус круга: ";
	std::cin >> r;
	disk.setRadius(r);
	obj = &disk;
	obj->show();
	
    std::cout << "Введіть радіус та висоту циліндра: ";
	std::cin >> r >> h;
	cylinder.setRadius(r);
	cylinder.setHeight(h);
	obj = &cylinder;
	obj->show();


    return 0;
}