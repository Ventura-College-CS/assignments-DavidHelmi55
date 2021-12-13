#include <iostream>
#include "Final2.hpp"
#include <fstream>
using namespace std;

void qsort(int[], int, int);
int partition(int[], int, int);
void printArray(int[], int);

int main()
{
	int target;
    ifstream ifs;
    ifs.open("class.txt");
	if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}

    cout << "Which CourseID would you like information for? " << endl;
    cin >> target;
    
    Course coursearray[10];
    int cid;
    string cname;
    int ccredit;
    int i;
    for(i=0; i<10; i++)
    {
        ifs >> cid >> cname >> ccredit;
        coursearray[i].setCourse(cid, cname, ccredit);
    }

	printArray(num, N);
	qsort(num, 0, N-1); 
	printArray(num, N);

}

void qsort(int num[], int first, int last)
{
	int pivot_idx;

	if ( first >= last )
		return;

	pivot_idx = partition(num, first, last);
	qsort(num, first, pivot_idx-1); 
	qsort(num, pivot_idx+1, last);  

}

int partition(int num[], int first, int last)
{
	int pivot = num[last];
	int i = -1;
	for (int j = 0; j < last; j++)
	{
		if (num[j] < pivot)
			swap(num[++i], num[j]);
	}
	swap(num[i + 1], num[last]);
	return i + 1;
}
void printArray(int num[], int N)
{

	for (int i = 0; i < N; i++)
		cout << num[i] << "\t";
	cout << endl;
}