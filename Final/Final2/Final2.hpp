#include <iostream>
#include <vector>
using namespace std;

class Class
{
    private:
        int CourseID;
        string CourseName;
        int CourseCredit;

    public:
        Class() : CourseID(0), CourseName() {}
        Class(int i, string name, int x)
        {
            CourseID = i;
            CourseName = name;
            CourseCredit = x;
        }
        int getID() const{return CourseID;}
        string getName() const { return CourseName;}
        int const &getCredit() const { return CourseCredit; }
	    void setSid(int id) { CourseID = id; }
	    void setSname(string name) { CourseName = name; }
        void setCredit(int s) {CourseCredit = s; }
	    void printClass() const
	    {
		    cout << "Class ID: " << CourseID << "\t";
		    cout << "Course Name: " << CourseName << "\t";
		    cout << "Course Credit: " << CourseCredit << "\t";
		    cout << endl;
	    }

};