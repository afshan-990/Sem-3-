#include<iostream>
using namespace std;

int rear=-1,front=0,q[100];

void enquque()
{
    int item,n;
    cout<<"Enter element to insert : ";
    cin>>item;
    if(rear == 99)
    {
         cout<<"QUEUE IS FULL";
    }
    else
    {
        rear++;
        q[rear] = item;
    }
}

void dequque()
{
    if(front>rear)
    {
         cout<<"QUEUE IS EMPTY";
    }
    else
    {
        cout<<"DELETED : "<<q[front];
        front++;
    }
}

void peek()
{
    if(front>rear)
    {
        cout<<"QUEUE IS EMPTY";
    }
    else
    {
        cout<<"At front : ["<<q[front]<<"]";
    }
}

void display()
{
    if(front>rear)
    {
        cout<<"QUEUE IS EMPTY";
    }
    else
    {
        cout<<"front->[";
        for(int i=front;i<=rear;i++)
        {
            cout<<q[i];
            if(i<rear)
            {
                cout<<",";
            }
        }
        cout<<"]<-rear";
        cout<<endl;
    }
}

int main()
{
    int ch;
    char end;
    do
    {
        cout<<"1.ENQUQUE"<<endl;
        cout<<"2.DEQUQUE"<<endl;
        cout<<"3.PEEK"<<endl;
        cout<<"4.display"<<endl;
        cout<<"What do you want to do : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                enquque();
                break;
            case 2:
                dequque();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                cout<<"Invalid input !!!!!!!";
                break;
        }
        cout<<"\n";
        cout<<"Do you want to continue ? (y/n) : ";
        cin>>end;
    } 
    while (end == 'y');
    return 0;
}
