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
        cout << "������ �������� �����" << endl;
    }

    ofstream FileCopy;
    try
    {
        FileCopy.open(newPath);
        FileCopy << content << endl;
        cout << "��������� ���������� � ����" << endl;
        FileCopy.close();
    }
    catch (...)
    {
        cout << "������ ����������� � ����" << endl;
    }
}