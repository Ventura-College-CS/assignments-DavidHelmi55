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
	Student s;
	int searchAvg;
	int found = 0;
    
	ifs.open("students.bin");
	if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}
	

    cout << "What is the average score or above you would like to see? " << endl;
    cin >> searchAvg;

	for (int i = 0; i < 10; ++i) {    
		
		ifs.read((char *)&s, sizeof(s));
		if ( ifs.fail())
		{
			cerr << "Read Error\n";
			exit(0);
		}

		if(searchAvg < s.avg)
		{
			found = 1;
            cout << "Students with an average score above: " << searchAvg << endl;
			cout << "ID: " << s.sid << endl;
			cout << "Name: " << s.sname << endl;
			cout << "Score 1: " << s.score[0] << endl;
			cout << "Score 2: " << s.score[1] << endl;
            cout << "Score 2: " << s.score[1] << endl;
			cout << "Sum: " << s.sum << endl;
			cout << "Avg: " << s.avg << endl;
		}
	}
	if (!found)
			cout << searchAvg << " was not found"<< endl;

}