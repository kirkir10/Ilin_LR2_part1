#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Ilin_MAthTask.h"

using namespace  cute;
void testCalcRectangleArea()
{
    int width = 3;
    int height = 5;
    int expected = 15;
    int actual = calculateRectangleArea(width,height);
    ASSERT_EQUAL(expected, actual);
} 

void testUserInput_Empty(){
    string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL (expected, actual);
}

void testUserInput_Letter(){
    string str = "a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL (expected, actual);
}

void testUserInput_NegativeValue(){
    string str = "-5";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL (expected, actual);
}

int main(){
    suite s;
    s.push_back(CUTE(testCalcRectangleArea));
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_NegativeValue));
    ide_listener<> listener;
    makeRunner(listener)(s, "All Rectangle Tests");

    return 0;
}