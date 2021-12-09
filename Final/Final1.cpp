#include <iostream>
#include <fstream>
using namespace std;

struct Class{
    int CourseID;
    string CourseName;
    int CourseCredit;
};

int binarySearch(int array[], int first, int last, int target)
{

    if (first > last)
               return -1;
       int mid = (first + last) / 2;
       if (array[mid] == target)
               return mid;
       if (array[mid] > target)
               return binarySearch(array, first, mid - 1, target);
       else
               return binarySearch(array, mid + 1, last, target);
       return -1;
    
}

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
    
        int array[] = {10 , 15, 20, 25, 30, 35, 40, 45, 50, 55};
        int x = sizeof(array) / sizeof(array[0]);
        int result = binarySearch(array, 0, x-1, target);
        (result == -1)
                ? cout << "Element is not present in array"
                : cout << "Element is present at index " << result;
        return 0;
    
}