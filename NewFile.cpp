#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("test.txt");
    file << "Hello!" << endl;
    file.close();
}
