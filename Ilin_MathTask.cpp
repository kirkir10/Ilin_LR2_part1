#include <iostream>
#include <Ilin_MAthTask.h>

using namespace std;

int main() {
    string str_input;
    cout << "input height" << endl;
    getline(cin, str_input);
    while (!UserInput(str_input))
    {
        cout << "input height" << endl;
        getline (cin, str_input);
    }
    int height = stoi(str_input);
    cout << "input width" << endl;
    getline (cin, str_input);
    while (!UserInput(str_input))
    {
         cout << "input width" << endl;
        getline (cin, str_input);
    }
    int width = stoi(str_input);    
    int RectangleArea = calculateRectangleArea(height, width);
    cout << "Area of Rectangle is " << RectangleArea << endl;
    }
    
}