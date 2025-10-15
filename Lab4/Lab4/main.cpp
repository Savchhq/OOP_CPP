#include "Header.h"
#include <windows.h>

    int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

        double a, b;
        cout << "¬вед≥ть катет a: ";
        cin >> a;
        cout << "¬вед≥ть катет b: ";
        cin >> b;
    
        PryamokutniyTrikutnykVKoli fig(a, b);

        ofstream fout("figury.txt");
        fig.Info(fout);
        fout.close();

        cout << "≤нформац≥ю записано у файл figury.txt\n";
		cout << "≤нформац≥€ на екран≥:\n";
		fig.Show(cout);

        return 0;
    }
