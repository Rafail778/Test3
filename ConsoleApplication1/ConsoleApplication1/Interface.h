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
        cout << "Меню:" << endl;
        cout << "1. Создать новый текстовый файл" << endl;
        cout << "2. Создать копию текстового файла" << endl;
        cout << "3. Перемещение текстового файла" << endl;
        cout << "4. Удаление содержимого текстового файла" << endl;
        cout << "0. Выход" << endl;
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
        cout << "--- Good byе! ---" << endl;
        cout << "-----------------" << endl;
        cout << endl;
    }

};