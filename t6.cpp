#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int countLines(string path);
main()
{
    string file;
    string path = "Task6.txt";
    cout << "Total number of lines: " << countLines(path);
}
int countLines(string path)
{
    char letters[200];
    char checkLetter;
    int count = 0;
    fstream file;
    file.open(path, ios::in);
    file >> checkLetter;
    string line;
    while(!file.eof())
    {
        getline(file, line);
        if (line[0] != (checkLetter))
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    file.close();
    return count - 2;
}