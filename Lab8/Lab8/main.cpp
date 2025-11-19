#include <iostream>
#include <vector>
#include <algorithm> 
#include <iomanip>  

int main() {
    std::vector<std::vector<int>> matrix = {
        { 10,  0, -5,  2 },
        {  3, -4,  8,  1 },
        { -1,  0,  5, -9 }
    };

    int totalNegativeCount = 0;

    std::cout << "Початкова матриця:" << std::endl;

    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << std::setw(4) << val;
        }
        std::cout << std::endl;

        bool hasZero = (std::find(row.begin(), row.end(), 0) != row.end());

        // варіант через std::any_of
        // bool hasZero = std::any_of(row.begin(), row.end(), [](int x){ return x == 0; });

        if (hasZero) {
            int negativeInRow = std::count_if(row.begin(), row.end(), [](int x) {
                return x < 0;
                });

            totalNegativeCount += negativeInRow;
        }
    }

    std::cout << "\n--------------------------------------------------" << std::endl;
    std::cout << "Кiлькiсть вiд'ємних елементiв у рядках з нулями: " << totalNegativeCount << std::endl;

    return 0;
}