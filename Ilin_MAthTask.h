#include <iostream>
#include <limits> // Для очистки входного потока
using namespace std;

// Метод контроля вводимых данных (гарантирует ввод целого числа)
int inputValidatedInteger() {
    int number;
    while (true) {
        cout << "Введите целое число: ";
        cin >> number;

        if (cin.fail()) { // Если произошла ошибка ввода
            cin.clear(); // Сбрасываем состояние потока
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Очищаем поток ввода
            cout << "Ошибка ввода. Пожалуйста, введите целое число.\n";
        } else {
            return number; // Корректный ввод
        }
    }
}

// Метод ввода двух целых чисел с валидацией
void inputTwoValidatedIntegers(int &a, int &b) {
    cout << "Введите параметры прямоугольника:\n";
    a = inputValidatedInteger();
    b = inputValidatedInteger();
}

// Метод вычисления площади прямоугольника
int calculateRectangleArea(int width, int height) {
    return width * height;
}

