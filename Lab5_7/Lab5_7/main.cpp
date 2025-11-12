#include "Header.h"

int main() {
    Human* humans = new Human[10];
    Animal* animals = new Animal[10];
    int humansCount = 0;
    int animalsCount = 0;

    int c = 0;
    while (c != 5) {
        menu();
        cout << "\nEnter choice: ";
        cin >> c;
        switch (c) {
        case 1: {
            if (humansCount < 10) {
                string name, phone;
                int age;

                cout << "Enter name:";
                cin >> name;
                humans[humansCount].setfullName(name);
                cout << "Enter phone number:";
                cin >> phone;
                humans[humansCount].setphoneNum(phone);
                cout << "Enter age:";
                cin >> age;
                humans[humansCount].setAge(age);
                humansCount++;
            }
            else { cout << "List is full!\n"; }
            break;
        }
        case 3: {
            for (humansCount = 0; humansCount < 10; humansCount++)
            {
                if (humans[humansCount].getFullName() == "") { break; }
                else {
                    humans[humansCount].printInfo();
                }
            }break;
        }
        }
    }
    delete[] humans;
    delete[] animals;

    return 0;
}
