#include "stackwithll.h"
using namespace std;

template<typename T>
Node<T>::Node(T value)
{
    data = value;
    next = nullptr;
}
template<typename T>
stack<T>::stack()
{
    top = nullptr;
}
template<typename T>
void stack<T>::push()
{
    T item;
    cout<<"ENTER A NUMBER TO INSERT : ";
    cin>>item;
    Node<T> *newnode;
    Node<T> newnode = new Node(item);
    newnode->next = top;
    top = newnode;
}
template<typename T>
void stack<T>::pop()
{
    if(top==nullptr)
    {
        cout<<"Stack is EMPTY bro.......";
    }
    else
    {
        Node<T>* temp;
        temp = top;
        T item = temp->data;
        top = top->next;
        delete temp;
        cout<<"WE EXECUTED "<<item<<" AS YOU SAID"<<endl;
    }
}
template<typename T>
void stack<T>::peek()
{
    if(top==nullptr)
    {
        cout<<"Stack is EMPTY bro.......";
    }
    else
    {
        cout<<"TOP GUY IS : "<<top->data<<endl;
    }
}
template<typename T>
void stack<T>::display()
{
    if(top==nullptr)
    {
        cout<<"Stack is EMPTY bro.......";
    }
    else
    {
        Node<T>* temp;
        temp = top;
        while(temp!=nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}
