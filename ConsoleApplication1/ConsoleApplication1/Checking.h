#pragma once
#include <iostream>
#include <string>

using namespace std;

//проверка корректности введенного числа
int CheckingTheSymbol(string enterSymbol)
{
    if (enterSymbol.size() != 1) return -1; //значения -1 в меню нет, поэтому для отработки цикла switch/case возвращаем дл¤ примера число -1
    else {
        int number;
        for (int i = 0; i < enterSymbol.size(); i++)
        {
            number = enterSymbol[i];
        }
        if (number > 47 && number < 56) {
            return number - '0';
        }
        else return -1;
    }
}