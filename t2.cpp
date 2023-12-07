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
    string letters;
    fstream file;
    file.open(path, ios::in);
    while(getline(file,letters))
    {
        count += letters.length();
        // count++;
    }
    file.close();
    return count;
}