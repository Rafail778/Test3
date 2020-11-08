#pragma once
#include <iostream>
#include <string>

using namespace std;

class Interface
{
public:
    void PrintMenu()
    {
        cout << "+++++++++++++++++++++++++++" << endl;
        cout << "����:" << endl;
        cout << "1. ������� ����� ��������� ����" << endl;
        cout << "2. ������� ����� ���������� �����" << endl;
        cout << "3. ����������� ���������� �����" << endl;
        cout << "4. �������� ����������� ���������� �����" << endl;
        cout << "0. �����" << endl;
        cout << "+++++++++++++++++++++++++++" << endl;
    }
    void PrintError(string message)
    {
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        cout << "!!!!!!!!!! E R R O R !!!!!!!!!!" << endl;
        cout << "!!! " << message << " !!!" << endl;
        cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
        cout << endl;
    }
    void PrintExit()
    {
        cout << endl;
        cout << "-----------------" << endl;
        cout << "--- Good by�! ---" << endl;
        cout << "-----------------" << endl;
        cout << endl;
    }

};