#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void ToClearTheContents(string path)
{
	ifstream File;
    string content;
    try
    {
        File.open(path, ios::in);
        while (!File.eof())
        {
            File >> content;
            content.clear();
        }
        File.close();
    }
    catch (...)
    {
        cout << "������ ������� �����" << endl;
    }
    ofstream File1;
    try
    {
        File1.open(path);
        File1 << content << endl;
        cout << "���� ������" << endl;
        File1.close();
    }
    catch (...)
    {
        cout << "������ ������� �����������" << endl;
    }
}