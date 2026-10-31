#include "stack.h"
using namespace std;

template<typename T>
stack<T>::stack()
{
    top = -1;
}
template<typename T>
void stack<T>::push()
{
    T item;
    cout<<"ENTER A NUMBER TO INSERT : ";
    cin>>item;
    if(top==99)
    {
        cout<<"Stack is OVERFLOW bro.......";
    }
    else
    {
        top++;
        a[top] = item;
    }
}
template<typename T>
void stack<T>::pop()
{
    if(top==-1)
    {
        cout<<"Stack is EMPTY bro.......";
    }
    else
    {
        T item = a[top];
        top--;
        cout<<"WE EXECUTED "<<item<<" AS YOU SAID"<<endl;
    }
}
template<typename T>
void stack<T>::peek()
{
    if(top==-1)
    {
        cout<<"Stack is EMPTY bro.......";
    }
    else
    {
        cout<<"TOP GUY IS : "<<a[top]<<endl;
    }
}
template<typename T>
void stack<T>::display()
{
    if(top==-1)
    {
        cout<<"Stack is EMPTY bro.......";
    }
    else
    {
        for(int i = top;i>=0;i--)
        {
            cout<<"ELEMENT "<<i<<" IS : "<<a[i]<<endl;
        }
    }
}
