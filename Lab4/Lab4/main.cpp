#include "Header.h"
#include <windows.h>

    int main() {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);

        double a, b;
        cout << "������ ����� a: ";
        cin >> a;
        cout << "������ ����� b: ";
        cin >> b;
    
        PryamokutniyTrikutnykVKoli fig(a, b);

        ofstream fout("figury.txt");
        fig.Info(fout);
        fout.close();

        cout << "���������� �������� � ���� figury.txt\n";
		cout << "���������� �� �����:\n";
		fig.Show(cout);

        return 0;
    }
