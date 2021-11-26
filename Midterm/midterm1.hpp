#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>
using namespace std;

template <class T>

class Student
{

    private:
        int SID;
        string SName;
        double scores [3];

    public:
        Student();
        Student(int i, string name, double *sc);
        int getID()
        {
            
        }
        string getName()
        {

        }
        double *getScores()
        {

        }

};

class Stack
{

    private:
        vector<T> p;
    
    public:
        stack(int size)
        {
            p.reserve(size);
        }
        void push(T el)
        {
            p.push_back(el);
        }
        T pop()
        {
            T val = p.back();
            p.pop_back();
            return val;
        }
        T &topEl()
        {
            return p.back();
        }
        int isEmpty()
        {
            return p.empty();
        }
        int size()
        {
            return p.size();
        }
};

#endif