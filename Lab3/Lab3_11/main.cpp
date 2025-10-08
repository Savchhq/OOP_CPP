#include "Header.h"
#include <Windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
    Pryamokutnyk p;   
    bool created = false; 

    do {
        int choice;
        cout << "\n======= МЕНЮ =======\n";
        cout << "1. Створити прямокутник\n";
        cout << "2. Вивести дані про фігуру\n";
        cout << "3. Збільшити сторони (++ оператор)\n";
        cout << "4. Зменшити сторони (-- оператор)\n";
        cout << "5. Вивести площу з масштабом\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

            switch (choice) {
            case 1: {
                try {
                    double a, b;
                    cout << "Введіть сторону a: ";
                    if (!(cin >> a) || cin.peek() != '\n' || a <= 0) {
                        throw invalid_argument("Некоректне число для a!");
                    }

                    cin.ignore(1000, '\n'); 

                    cout << "Введіть сторону b: ";
                    if (!(cin >> b) || cin.peek() != '\n' || b <= 0) {
                        throw invalid_argument("Некоректне число для b!");
                    }

                    cin.ignore(1000, '\n');

                    p = Pryamokutnyk(a, b);
                    created = true;
                    cout << "Прямокутник створено!\n";
                }
                catch (const invalid_argument& e) {
                    cout << e.what() << endl;
                    cin.clear();  
                    cin.ignore(1000, '\n');
                }
            }

            case 2:
                if (created)
                    p.showInfo("Мій прямокутник");
                else
                    cout << "Спочатку створіть прямокутник!\n";
                break;

            case 3:
                if (created) {
                    ++p;
                    cout << "Сторони збільшено.\n";
                    p.showInfo();
                }
                else
                    cout << "Спочатку створіть прямокутник!\n";
                break;

            case 4:
                if (created) {
                    --p;
                    cout << "Сторони зменшено.\n";
                    p.showInfo();
                }
                else
                    cout << "Спочатку створіть прямокутник!\n";
                break;

            case 5:
                if (created) {
                    double k;
                    cout << "Введіть коефіцієнт масштабування: ";
                    cin >> k;
                    cout << "Площа після збільшення у " << k << " раз(и): "
                        << p.getArea(k) << endl;
                }
                else
                    cout << "Спочатку створіть прямокутник!\n";
                break;

            case 0:
                cout << "Вихід з програми.\n";
                return 0;

            default:
                cout << "Невірний вибір! Спробуйте ще раз.\n";
            }

    } while (true);
}
