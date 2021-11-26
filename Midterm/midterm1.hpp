#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack
{

    private:
        vector<T> p;
    
    public:
        stack();

        void push(T el)
        {


        }

        T pop()
        {

            

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
