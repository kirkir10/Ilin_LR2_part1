#include <iostream>
#include <limits> // Для очистки входного потока
#include <cstring>
using namespace std;


bool UserInput(string input) {
    if (input.empty()) return false;
    try {
        int number = stoi(input);
        if (number < 0) return false; // Отрицательные числа не допускаются
    } catch (...) {
        return false;
    }
    return true;
}


// Метод вычисления площади прямоугольника
int calculateRectangleArea(int width, int height) {
    return width * height;
}
#endif

