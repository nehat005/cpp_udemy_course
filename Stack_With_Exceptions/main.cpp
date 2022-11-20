#include <iostream>

using namespace std;

class StackUnderflow : exception{};
class StackOverflow : exception{};

class Stack
{
private:
    int *stk;
    int top = 1;
    int size;
public:
    Stack(int sz) //Parameterised Constructor
    {
        size = sz;
        stk = new int[size];
    }
    void push(int x)
    {
        if (top == size-1)
        {
            throw StackOverflow();
        }
        top++;
        stk[top] = x;
    }
    int pop()
    {
        if(top == -1)
        {
            throw StackUnderflow();
        }
        int k = stk[top];
        top--;
        return k;
    }
};

int main()
{
    Stack s(5);

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
}
