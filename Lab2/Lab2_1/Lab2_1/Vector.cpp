#include "Vector.h"

Vector::Vector(int size) {
    n = size;
    for (int i = 0; i < n; i++) data[i] = 0;
}

void Vector::setSize(int size) { n = size; }
int Vector::size() const { return n; }

void Vector::set(int i, double value) { data[i] = value; }
double Vector::get(int i) const { return data[i]; }

void Vector::print() const {
    for (int i = 0; i < n; i++) cout << data[i] << " ";
    cout << endl;
}