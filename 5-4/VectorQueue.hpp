#include <iostream>
using namespace std;

template<class T, int size = 100>
class VectorQueue
{
    private:
        T queue<size>;
        int front;
        int rear;
    
    public:
        VectorQueue() : front(-1), rear(-1) {}
        void enqueue(T el)
        {
            if(!isFull())
            {
                if(isEmpty())
                {
                    front = rear = 0;
                    queue<0> = el;
                }
                else
                {
                    rear = rear + 1;
                    queue<rear> = el;
                }
            }
            else
                cout << "Queue is full \n";
        }
        T dequeue()
        {
            T el;
            if (!isEmpty())
            {
                el = queue<front>;
                front += 1;
                if(front == rear + 1)
                    front = rear = -1;
            }
            else
                cout << "Queue is Empty \n";
        
            return el;
        }
        int isFull()
        {
            return rear == size - 1;
        }
        int isEmpty()
        {
            return(front == -1 && rear == -1);
        }
};