#include <iostream>
#include <fstream>

using namespace std;

struct Student{
    int id;
    char sname[20];
    double score[2];
    double sum;
    double avg;
};

int main()
{
    ifstream ifs;

    Student s;

    ifs.open("students.txt");

    if(!ifs.fail())
    {
        cout << "Could not open the fils \n";
        exit(0);
    }

    // for 10 times
    ifs.read((char *)&s, sizeof(s));

    cout << "ID: " << s.id << "\t";
    cout << "Name: " << s.sname << "\t";
    cout << "Average: " << s.avg << "\t";

    // Search the student information by the student ID

    // 10004

    // print info for Elaine
}