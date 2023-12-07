#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int countLines(string path);
main()
{
    string file;
    string path = "file.txt";
    cout << "Total number of characters: " << countLines(path);
}
int countLines(string path)
{
    int count = 0;
    char letters;
    fstream file;
    file.open(path, ios::in);
    while(!file.eof())
    {
        if(letters == 's' || letters == 'S')
        {
            count++;
        }
    }
    file.close();
    return count;
}