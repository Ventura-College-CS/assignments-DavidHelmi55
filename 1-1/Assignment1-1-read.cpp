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
	int searchID;
	int found = 0;
    
	ifs.open("students.bin");
	if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}
	

    cout << "Which ID number would you like information for? " << endl;
    cin >> searchID;

	for (int i = 0; i < 10; ++i) {    
		
		ifs.read((char *)&s, sizeof(s));
		if ( ifs.fail())
		{
			cerr << "Read Error\n";
			exit(0);
		}

		if(searchID == s.id)
		{
			found = 1;
			cout << "ID: " << searchID << endl;
			cout << "Name: " << s.sname << endl;
			cout << "Score 1: " << s.score[0] << endl;
			cout << "Score 2: " << s.score[1] << endl;
			cout << "Sum: " << s.sum << endl;
			cout << "Avg: " << s.avg << endl;
		}
	}
	if (!found)
			cout << searchID << " was not found"<< endl;

}