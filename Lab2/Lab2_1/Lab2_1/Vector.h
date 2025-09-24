#pragma once
#include <iostream>

using namespace std;

const int MAX = 10;

class Vector {
private:
    int n;
    double data[MAX];

public:
    Vector(int size = 0);

    void setSize(int size);
    int size() const;

    void set(int i, double value);
    double get(int i) const;

    void print() const;
};
