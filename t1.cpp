#include <iostream>
#include <fstream>
using namespace std;
int countLines(string path);
main()
{
    string file;
    string path = "file.txt";
    cout << "Total number of lines: " << countLines(path);
}
int countLines(string path)
{
    int count = 0;
    string line;
    fstream file;
    file.open(path, ios::in);
    while(!file.eof())
    {
        getline(file,line);
        count++;
    }
    file.close();
    return count;
}