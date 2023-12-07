#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void displayWords(string &nfile);
main()
{
    string nfile = "Task7.txt";
    displayWords(nfile);
}
void displayWords(string &nfile)
{
    ifstream file(nfile);
    string line, word;
    int count = 0;
    while (getline(file, line))
    {
        word.clear();

        for (char ch : line)
        {
            if (ch == ' ')
            {
                if (!word.empty() && word.length() < 4)
                {
                    cout << word << endl;
                }
                word.clear();
            }
            else
            {
                word += ch;
            }
        }
        if (!word.empty() && word.length() < 4) {
            cout << word << endl;
        }
    }
    file.close();
}
