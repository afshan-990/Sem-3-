#include<iostream>
using namespace std;
template<typename T>
class Node
{
public:
    int data;
    Node* next;
    Node(T value);
};
template<typename T>
class stack
{
    Node<T> *top;
public:
    stack();
    void push();
    void pop();
    void peek();
    void display();
};
