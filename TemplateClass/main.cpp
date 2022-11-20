#include <iostream>

using namespace std;

template <class T>
class Stack
{
   private:
       T *stk;
       int top ;
       int size;
   public:
       Stack(int sz)
       {
           size = sz;
           top = -1;
           stk = new T[size];
       }
       void push(T x);
       T pop();

};

template <class T>
void Stack<T>:: push(T x)
{
    if(top==size-1)
    {
        cout<< "STACK IS FULL!"<<endl;
    }
    else
    {
        top++;
        stk[top] = x;

    }

}

template < class T>
T Stack<T>::pop()
{
    T x=0;
    if(top == -1)
    {
        cout<< "STACK IS EMPTY!"<<endl;
    }
    else{
        x = stk[top];
        top--;
    }
    return x;
}


int main()
{
    Stack<int> s(10); //integer type stack!
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    return 0;
}
