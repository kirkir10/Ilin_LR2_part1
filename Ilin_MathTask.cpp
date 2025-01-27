#include <iostream>
#include <Ilin_MAthTask.h>

using namespace std;

int main() {
    int width, height;

    // Ввод ширины и высоты прямоугольника с контролем ввода
    inputTwoValidatedIntegers(width, height);

    // Вычисление площади
    int area = calculateRectangleArea(width, height);

    // Вывод результата
    cout << "Площадь прямоугольника: " << area << endl;

    return 0;
}