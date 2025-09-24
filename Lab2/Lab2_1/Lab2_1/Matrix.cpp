#include "Matrix.h"

// ---------- Vector ----------
Vector::Vector(int size) {
    n = size;
    for (int i = 0; i < n; i++) data[i] = 0;
}

int Vector::getSize() const {
    return n;
}

double Vector::getValue(int index) const {
    if (index >= 0 && index < n) return data[index];
    return 0; 
}

void Vector::setValue(int index, double value) {
    if (index >= 0 && index < n) data[index] = value;
}

void Vector::print() {
    for (int i = 0; i < n; i++) cout << data[i] << " ";
    cout << endl;
}

// ---------- Matrix ----------
Matrix::Matrix(int r, int c) {
    rows = r; cols = c;
    for (int i = 0; i < rows; i++) row[i] = Vector(cols);
}

int Matrix::getRows() const {
    return rows;
}

int Matrix::getCols() const {
    return cols;
}

double Matrix::getValue(int i, int j) const {
    if (i >= 0 && i < rows && j >= 0 && j < cols)
        return row[i].getValue(j);
    return 0;
}

void Matrix::setValue(int i, int j, double value) {
    if (i >= 0 && i < rows && j >= 0 && j < cols)
        row[i].setValue(j, value);
}

void Matrix::print() {
    for (int i = 0; i < rows; i++) row[i].print();
    cout << endl;
}

Matrix Matrix::add(Matrix B) {
    Matrix C(rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C.setValue(i, j, getValue(i, j) + B.getValue(i, j));
    return C;
}

Matrix Matrix::multiply(Matrix B) {
    Matrix C(rows, B.cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < B.cols; j++) {
            double sum = 0;
            for (int k = 0; k < cols; k++)
                sum += getValue(i, k) * B.getValue(k, j);
            C.setValue(i, j, sum);
        }
    }
    return C;
}
