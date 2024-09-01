#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int size = 10;
    int tail = -1;
    int queue[10];
    int head = -1;
    int currSize = 0;
    Queue()
    {
    }
    void push(int val)
    {
        if (currSize > 10)
        {
            cout << "Over Flow\n";
        }
        else if (currSize == 0)
        {
            head += 1;
            tail += 1;
        }
        else
        {
            tail = (tail + 1) % size;
        }
        queue[tail] = val;
        currSize++;
    }
    int top()
    {
        if (currSize == 0)
            return -1;
        else
            return queue[head];
    }
    int pop()
    {
        int ele = queue[head];
        if (currSize == 0)
            cout << "Under Flow\n";
        else if (currSize == 1)
        {
            head = tail = -1;
        }
        else
        {
            head = (head + 1) % size;
        }
        currSize -= 1;
        return ele;
    }
    int siz()
    {
        return currSize;
    }
};

int main()
{
    Queue q;
    q.push(10);
    cout<<q.siz();
}