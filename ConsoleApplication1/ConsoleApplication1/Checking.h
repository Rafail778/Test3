#pragma once
#include <iostream>
#include <string>

using namespace std;

//�������� ������������ ���������� �����
int CheckingTheSymbol(string enterSymbol)
{
    if (enterSymbol.size() != 1) return -1; //�������� -1 � ���� ���, ������� ��� ��������� ����� switch/case ���������� �� ������� ����� -1
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