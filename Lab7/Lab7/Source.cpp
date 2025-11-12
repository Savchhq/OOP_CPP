#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    multimap<string, int> index;
    ifstream file("text.txt");
    if (!file) {
        cout << "Не вдалося відкрити файл!" << endl;
        return 1;
    }

    string line, word;
    int lineNum = 0;

    while (getline(file, line)) {
        lineNum++;
        stringstream ss(line);
        while (ss >> word)
            index.insert({ word, lineNum });
    }

    file.close();

    for (auto it = index.begin(); it != index.end(); ++it)
        cout << it->first << " — рядок " << it->second << endl;

    string key;
    cout << "\nВведіть слово для пошуку: ";
    cin >> key;

    auto range = index.equal_range(key);
    if (range.first == range.second)
        cout << "Слово не знайдено!" << endl;
    else {
        cout << "Слово \"" << key << "\" зустрічається у рядках: ";
        for (auto i = range.first; i != range.second; ++i)
            cout << i->second << " ";
        cout << endl;
    }

    return 0;
}
