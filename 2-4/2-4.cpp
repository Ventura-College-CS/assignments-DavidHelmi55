#include <iostream>
#include <fstream>

using namespace std;

struct Students{
    
    int sid;
    char sname[20];
    double scores[3];
    
};

Students *makeStudents(int);
void printStudents(Students *ptr, int N);
void sortStudents(Students *ptr, int N);

int main()
{
    
    const int N = 10;
    Students *ptr;
    
    ptr = makeStudents(N);
    printStudents(ptr, N);
    sortStudents(ptr, N);
    
}

Students *makeStudents(int N)
{
    
    ifstream ifs;

    Students *ptr = new Students [N];

    ifs.open("students.txt");

    for (int i = 0; i < N; ++i) 
    {
        ifs >> (ptr+i) -> sid >> (ptr+i) -> sname;
        for(int j=0; j<3; j++)
        {
            ifs >> (ptr+i) -> scores[j];
        }
    }
    return ptr;
    
}

void printStudents(Students *ptr, int N)
{
    
    for(int i=0; i<N; i++){
        cout << (ptr+i)->sid << "\t";
        cout << (ptr+i)->sname << "\t";
        for(int j=0; j<3; j++)
        {
            cout << (ptr+i) -> scores[j] << "\t";
        }
        cout << "\n";
	}
    cout << endl;
    
}

void sortStudents(Students *ptr, int N)
{
    int sum1, sum2;
    for( int i=0; i< N-1; i++ )
    {
	    for( int j=0; j<N-1; j++) 
	    {
	        sum1 = 0;
	        sum2 = 0;
		    for(int k=0; k<3; k++)
            {
                sum1 += (ptr+j)->scores[k];
                sum2 += (ptr+j+1)->scores[k];
		    }    
		    if ( sum1 < sum2)
            {
                swap( *(ptr+j), *(ptr+j+1));
            }
	    }
    }
    for(int i=0; i<N; i++)
    {
        cout << (ptr+i)->sid << "\t";
        cout << (ptr+i)->sname << "\t";
        for(int j=0; j<3; j++)
        {
            cout << (ptr+i) -> scores[j] << "\t";
        }
        cout << "\n";
	}
    cout << endl;
}