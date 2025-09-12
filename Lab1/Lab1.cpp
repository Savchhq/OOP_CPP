#include <iostream>
#include <cmath>
using namespace std;

class Functions {
private:
    double y, z, b;

public:
    Functions() {
        
        y = 0.47 * 11;
        z = -1.32 * 11;
        b = 11;
    }

    void calcA(double x) {
        double numerator = z + pow(sin(y + b), 2) * pow((y + b), 1.3);
        double denominator = pow(z, 2) + (pow(x, 2) + y) / fabs(y + pow(x, 3) / 3.0);
        cout << "a(x,y,z,b) = " << pow(y, 2) + numerator / denominator - pow(log(fabs(z)), 2);
    }

    void calcB(double x) {
        double numerator = 1 + pow(cos(y - 2 * pow(x, 3)), 2);
        double denominator = 2 + pow(fabs(x), 1.5) - pow(sin(z), 2) * pow(fabs(z), 0.2);
        cout << "b(x,y,z)   = " << numerator / denominator + pow(log(fabs(z - y)), 2);
    }

   void One(){
    calcA(0.48*11);
    cout<<"\n";
    calcB(0.48*11);
    cout<<"\n";
   }

   void Two(){
    
    for(double x =-1; x < 1; x+=0.2){
    calcA(x);
    cout<<"\t";
    calcB(x);
    cout<<"\n";
    }
   }
        
};

int main() {

    Functions f;
    
    cout<<"Task One:\n";
    f.One();
    cout<<"\nTask Two:\n";
    f.Two();


    return 0;
}
