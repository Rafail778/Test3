#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ImportResult(string path, string newPath)
{
	ifstream File;
    char content;
    try
    {
        File.open(path, ios::in);
        while (File.get(content)) {}
        File.close();
    }
    catch (...)
    {
        cout << "Ошибка открытия файла" << endl;
    }

    ofstream FileCopy;
    try
    {
        FileCopy.open(newPath);
        FileCopy << content << endl;
        cout << "Результат скопирован в файл" << endl;
        FileCopy.close();
    }
    catch (...)
    {
        cout << "Ошибка копирования в файл" << endl;
    }
}