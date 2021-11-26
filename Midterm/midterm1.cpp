#include <iostream>
#include "midterm1.hpp"
using namespace std;

int main()
{

    Stack<int, 5>p;

    p.push(1001, "John", 100, 20, 100);
    p.push(1002, "Bill", 5, 30, 40);
    p.push(1003, "Nathan", 60, 70, 75);
    p.push(1004, "David", 100, 100, 100);
    p.push(1005, "Mark", 100, 40, 100);

    p.size();

    p.pop();
    p.pop();
    p.pop();
    p.pop();
    p.pop();
    p.pop();
    p.pop();

    if(p.isEmpty())
        cout << "Stack is empty \n";

}