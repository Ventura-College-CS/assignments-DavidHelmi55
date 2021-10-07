#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 

double *makeNumbers(int N);
void printNumbers(double *, int N);
void sortNumbers(double *, int N);
void deleteNumbers(double *ptr);

int main()
{

    const int N = 10;
    double *ptr;

    ptr = makeNumbers(N);
    printNumbers(ptr, N);
    sortNumbers(ptr, N);
    

}

double *makeNumbers(int N)
{
    
    double *ptr;
    ptr = new double[N];

    srand(time(0));
    for(int i=0; i<N; i++)
    {
        *(ptr+i) = rand() % 100;
    }
    return ptr;

}

void printNumbers(double *ptr, int N)
{

    for(int i=0; i<N; i++)
        cout << *(ptr+i) << "\t";
    cout << endl;

}

void sortNumbers(double *ptr, int N)
{

    int i, j, t;
    
    for (i = 0; i < N; i++) 
    {
        for (j = i + 1; j < N; j++) 
        {
            if (*(ptr + j) < *(ptr + i)) 
            {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
    for(int i=0; i<N; i++)
        cout << *(ptr+i) << "\t";
    cout << endl;
}

void deleteNumbers(double *ptr)
{

    delete ptr;
    
}
