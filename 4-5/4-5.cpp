#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
using namespace std;

void initVectors(vector<int> & , vector<string> &, int);
void printVectors(vector<int> , vector<string> , int);
void sortVectors(vector<int> &, vector<string> &, int);

int main()
{
    const int N=10;
    vector<int> IDs(N);
    vector<string> names(N);

    initVectors(IDs, names, N);
    printVectors(IDs, names, N);
    sortVectors(IDs, names, N);
    printVectors(IDs, names, N);

}

void initVectors(vector<int> &IDs, vector<string> &names, int N)
{
    ifstream ifs;
    
    ifs.open("vectordata.txt");

    if ( ifs.fail())
	{
		cerr << "File Open Error\n";
		exit(0);
	}

	for(int i=0;i<N;i++)
	{
        ifs >> IDs[i] >> names[i] ;
        if ( ifs.fail() )
		{
			cerr << "File Read Error\n";
			exit(0);
		}
    }
    
}
void sortVectors(vector<int> &IDs, vector<string> &names, int N)
{
	// string string1, string2;
	string tmp;
	for (int i = 0; i < N; i++)
	{
		// string1 = names[i];
		// string2 = names[i+1];
		// for(int j=i+1; j<N; j++)
		for (int j = 0; j < N - 1; j++)
		{
			// if (string1 > string2)
			if (names[j] > names[j + 1])
			{
				tmp = names[j + 1];
				names[j + 1] = names[j];
				names[j] = tmp;
				// tmp = string1;
				// string1 = string2;
				// string2 = tmp;
			}
		}
	}
}






// void sortVectors(vector<int> &IDs, vector<string> &names, int N)
// {
//     string string1, string2;
//     string tmp;
//     for(int i=0; i<N; i++)
//     {
//         string1 = names[i];
//         string2 = names[i+1];
//         for(int j=i+1; j<N; j++)
//         {
//             if ( string1 > string2 )
//             {
//                 tmp = string1;
//                 string1 = string2;
//                 string2 = tmp;
//             }
//         }
//     }
// }
void printVectors(vector<int> IDs, vector<string> names, int N)
{
    for(int i=0; i<N; i++)
        cout << IDs[i] << "\t" << names[i] << "\n";
    cout << endl;
}