#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Functions {
public:
    double calcB(double x, double y, double z) {
        double numerator = 1 + pow(cos(y - 2 * pow(x, 3)), 2);
        double denominator = 2 + pow(fabs(x), 1.5) - pow(sin(z), 2) * pow(fabs(z), 0.2);
        return numerator / denominator + pow(log(fabs(z - y)), 2);
    }

    double calcA(double x, double y, double z, double b) {
        double numerator = z + pow(sin(y + b), 2) * pow((y + b), 1.3);
        double denominator = pow(z, 2) + (pow(x, 2) + y) / fabs(y + pow(x, 3) / 3.0);
        return pow(y, 2) + numerator / denominator - pow(log(fabs(z)), 2);
    }
};

int main() {
    cout << fixed << setprecision(6);

    Functions f;
    double y = 0.47 * 11;
    double z = -1.32 * 11;

    cout << "Task One:\n";
    {
        double x = 0.48 * 11;
        double B = f.calcB(x, y, z);
        double A = f.calcA(x, y, z, B);
        cout << "b(x,y,z)   = " << B << "\n";
        cout << "a(x,y,z,b) = " << A << "\n";
    }

    cout << "\nTask Two:\n";
    for (double x = -1; x < 1; x += 0.2) {
        double B = f.calcB(x, y, z);
        double A = f.calcA(x, y, z, B);
        cout << "a(x,y,z,b) = " << A << "\t b(x,y,z) = " << B << "\n";
    }

    return 0;
}
