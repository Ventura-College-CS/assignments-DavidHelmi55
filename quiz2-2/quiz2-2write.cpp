#include <iostream>
#include <fstream>

using namespace std;

struct Student{
    
    int sid;
    char sname[20];
    double score[3];
    double sum;
    double avg;
    
};

int main()
{
    ifstream ifs;
    ofstream ofs;

    Student s;

    ifs.open("students.txt");
    ofs.open("students.bin");

    for (int i = 0; i < 10; ++i) 
    {
        ifs >> s.sid;
        ifs >> s.sname;
        ifs >> s.score[0];
        ifs >> s.score[1];
        ifs >> s.score[2];
        s.sum = s.score[0] + s.score[1] + s.score[2];
        s.avg = s.sum / 3.0;

        cout << "ID: " << s.sid << endl;
        cout << "Name: " << s.sname << endl;
        cout << "Score 1: " << s.score[0] << endl;
        cout << "Score 2: " << s.score[1] << endl;
        cout << "Score 3: " << s.score[2] << endl;
        // cout << "Sum: " << s.sum << endl;
        cout << "Avg: " << s.avg << "\n" << endl;

        ofs.write( (char *)&s, sizeof(s) ); 
    }
        
}