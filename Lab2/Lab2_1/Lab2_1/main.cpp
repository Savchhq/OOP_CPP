#include "Matrix.h"

int main() {
    Matrix A(2, 2), B(2, 2);

    A.setValue(0, 0, 1); A.setValue(0, 1, 2);
    A.setValue(1, 0, 3); A.setValue(1, 1, 4);

    B.setValue(0, 0, 5); B.setValue(0, 1, 6);
    B.setValue(1, 0, 7); B.setValue(1, 1, 8);

    cout << "A:" << endl; A.print();
    cout << "B:" << endl; B.print();

    cout << "A + B:" << endl; A.add(B).print();
    cout << "A * B:" << endl; A.multiply(B).print();

    return 0;
}
