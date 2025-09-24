#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
using namespace std;

const int MAX = 10;

class Vector {
private:
    int n;
    double data[MAX];

public:
    Vector(int size = 0);

    int getSize() const;
    double getValue(int index) const;
    void setValue(int index, double value);

    void print();
};

class Matrix {
private:
    int rows, cols;
    Vector row[MAX];

public:
    Matrix(int r = 0, int c = 0);

    int getRows() const;
    int getCols() const;
    double getValue(int i, int j) const;
    void setValue(int i, int j, double value);

    void print();

    Matrix add(Matrix B);
    Matrix multiply(Matrix B);
};

#endif
