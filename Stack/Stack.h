#include<iostream>
using namespace std;
template<typename T>
class stack
{
public:
    T a[100];
    int top;
    stack();
    void push();
    void pop();
    void peek();
    void display();
};
