#include <iostream>
#include <queue>
using namespace std;

class Student
{

    private:
        int SID;
        string SName;
        double scores [3];

    public:
        Student();
        Student(int i, string name, double *sc);
        int getID() const{return SID;}
        string getName() const { return SName;}
        double getScores() const{ return scores[3];}

};