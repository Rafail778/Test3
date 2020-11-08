//Написать программу, которая по запросу пользователя создавала бы копию 
//текстового файла, создавала бы новый текстовый файл, перемещала бы текстовый файл и удаляла бы содержимое текстового файла

#include <iostream>
#include <string>
#include "СopyОfFile.h"
#include "Interface.h"
#include "Checking.h"
#include "ToClearTheContents.h"
#include "MoveFiles.h"
#include "NewFile.h"

using namespace std;


int main()
{
    setlocale(0, "ru");

    Interface interface;

    string symbol;
    int number;

    do {
        interface.PrintMenu();
        cout << "Введите пункт меню - ";
        cin >> symbol;
        number = CheckingTheSymbol(symbol);
        system("cls");
        switch (number)
        {
        case 1:
        {
            string path, text;
            cout << "Введите путь нового" << endl;
            cin >> path;
            cout << "Введите текст файла" << endl;
            cin >> text;
            NewFile(path, text);
        }
            break;
        case 2://создание копии текстового файла
        {
            string path, newPath;
            cout << "Введите путь исходного файла" << endl;
            cin >> path;
            cout << "Введите путь копирования" << endl;
            cin >> newPath;
            ImportResult(path, newPath);
        }
            break;
        case 3:
        {
            string path, newPath;
            cout << "Введите путь исходного файла" << endl;
            cin >> path;
            cout << "Введите путь перемещения" << endl;
            cin >> newPath;
            MoveFiles(path, newPath);
        }
            break;
        case 4:
        {
            string path;
            cout << "Введите путь файла для очистки содержимого" << endl;
            cin >> path;
            ToClearTheContents(path);
        }
            break;
        case 0:
            interface.PrintExit();
            break;
        default:
            interface.PrintError("Некорректный выбор меню");
            break;
        }
    } while (number != 0);
}

