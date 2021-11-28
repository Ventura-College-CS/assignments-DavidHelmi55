#include <iostream>
#include "midterm1.hpp"
using namespace std;


template <class T, int capacity=3>
int main()
{

    Stack<Student, 5>p;

    Student s1, s2, s3, s4, s5;

	s1.setSid(10000001);
	s1.setSname("Bill");
	s1.setScore(100, 100, 100);
	s1.printStudent();

	s2.setSid(10000002);
	s2.setSname("Kurt");
	s2.setScore(100, 90, 100);
	s2.printStudent();

	s3.setSid(10000003);
	s3.setSname("Greg");
	s3.setScore(100, 90, 50);
	s3.printStudent();

    s4.setSid(10000004);
	s4.setSname("David");
	s4.setScore(100, 100, 95);
	s4.printStudent();
	
	s5.setSid(10000005);
	s5.setSname("Bob");
	s5.setScore(20, 10, 40);
	s5.printStudent();

    p.size();

    p.push(s1);
	p.push(s2);
	p.push(s3);
    p.push(s4);
    p.push(s5);

    while(p.isEmpty())
        cout << val.getSid() << endl;

}