#include <iostream>
#include <cmath>
#include <stdexcept>
#include <windows.h>

using namespace std;

template <typename T, int N>
class Vector {
private:
    T data[N]; 
public:
    Vector() {
        for (int i = 0; i < N; i++)
            data[i] = 0;
    }

    Vector(const Vector& other) {
        for (int i = 0; i < N; i++)
            data[i] = other.data[i];
    }

    ~Vector() {}

    Vector& operator=(const Vector& other) {
        if (this != &other) {
            for (int i = 0; i < N; i++)
                data[i] = other.data[i];
        }
        return *this;
    }

    T& operator[](int index) {
        if (index < 0 || index >= N)
            throw out_of_range("Індекс виходить за межі вектора!");
        return data[index];
    }

    T minValue() const {
        T min = data[0];
        for (int i = 1; i < N; i++)
            if (data[i] < min) min = data[i];
        return min;
    }

    T maxValue() const {
        T max = data[0];
        for (int i = 1; i < N; i++)
            if (data[i] > max) max = data[i];
        return max;
    }

    double norm() const {
        double sum = 0;
        for (int i = 0; i < N; i++)
            sum += data[i] * data[i];
        return sqrt(sum);
    }

    void sortAsc() {
        for (int i = 0; i < N - 1; i++)
            for (int j = i + 1; j < N; j++)
                if (data[i] > data[j])
                    swap(data[i], data[j]);
    }

    Vector operator+(const Vector& other) const {
        Vector<T, N> result;
        for (int i = 0; i < N; i++)
            result.data[i] = this->data[i] + other.data[i];
        return result;
    }

    friend istream& operator>>(istream& in, Vector& v) {
        for (int i = 0; i < N; i++) {
            cout << "Введіть елемент [" << i << "]: ";
            in >> v.data[i];
        }
        return in;
    }

    friend ostream& operator<<(ostream& out, const Vector& v) {
        out << "[ ";
        for (int i = 0; i < N; i++)
            out << v.data[i] << " ";
        out << "]";
        return out;
    }
};

template <typename T>
int searchElement(T arr[], int size, T key) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			return i;
		}
	}
	return -1;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int size = 5;

	int arr[size] = { 1,4,5,12,6 };
	float arr1[size] = { 1.5 ,4.6 ,5.4 ,12.5 ,6.75 };

	int keyInt = 12;
	float keyFloat = 5.4;

	int result1 = searchElement(arr, size, keyInt);
	int result2 = searchElement(arr1, size, keyFloat);

	if (result1 != -1)
		cout << "Елемент " << keyInt << " знайдено в масиві цілих на позиції " << result1 << endl;
	else
		cout << "Елемент " << keyInt << " не знайдено у масиві цілих." << endl;

	if (result2 != -1)
		cout << "Елемент " << keyFloat << " знайдено в масиві дійсних на позиції " << result2 << endl;
	else
		cout << "Елемент " << keyFloat << " не знайдено у масиві дійсних." << endl;

    Vector<double, 5> v1, v2;

    cout << "Введіть елементи першого вектора:\n";
    cin >> v1;

    cout << "\nВведіть елементи другого вектора:\n";
    cin >> v2;

    cout << "\nПерший вектор: " << v1 << endl;
    cout << "Другий вектор: " << v2 << endl;

    Vector<double, 5> v3 = v1 + v2;
    cout << "\nСума векторів: " << v3 << endl;

    cout << "\nМінімальне значення у v1: " << v1.minValue();
    cout << "\nМаксимальне значення у v1: " << v1.maxValue();
    cout << "\nЕвклідова норма v1: " << v1.norm() << endl;

    cout << "\nВектор v1 після сортування: ";
    v1.sortAsc();
    cout << v1 << endl;

    return 0;

}