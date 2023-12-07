#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void getdetails(string names[], int age[], float matric[], float fsc[], float ecat[], int size, int &count);
void saveToFile(string names[], int age[], float matric[], float fsc[], float ecat[], int count, string fileName);

int main()
{
    const int maxSize = 50;
    string names[maxSize];
    int age[maxSize];
    float matric[maxSize];
    float fsc[maxSize];
    float ecat[maxSize];
    int count = 0;
    string fileName = "file1.txt";

    getdetails(names, age, matric, fsc, ecat, maxSize, count);
    saveToFile(names, age, matric, fsc, ecat, count, fileName);

    return 0;
}

void getdetails(string names[], int age[], float matric[], float fsc[], float ecat[], int size, int &count)
{
    string check;
    while (count < size && check != "No")
    {
        cout << "Enter student's name: ";
        cin >> names[count];
        cout << "Enter student's age: ";
        cin >> age[count];
        cout << "Enter student's Matric marks: ";
        cin >> matric[count];
        cout << "Enter student's Fsc marks: ";
        cin >> fsc[count];
        cout << "Enter student's Ecat marks: ";
        cin >> ecat[count];
        cout << "Enter No to Stop or Yes to Continue: ";
        cin >> check;
        count++;
    }
}

void saveToFile(string names[], int age[], float matric[], float fsc[], float ecat[], int count, string fileName)
{
    ofstream file(fileName);
    for (int x = 0; x < count; x++)
    {
        file << "Name: " << names[x] << endl;
        file << "Age: " << age[x] << endl;
        file << "Matric Marks: " << matric[x] << endl;
        file << "Fsc Marks: " << fsc[x] << endl;
        file << "Ecat Marks: " << ecat[x] << endl << endl;
    }
    file.close();
}
