#include<iostream>
using namespace std;
struct Node
{
    Node* prev;
    int  data;
    Node*  next;
};
class doubly_linked_list
{
public:
    Node* head = NULL;
    Node* tail = NULL;
    void insert_at_end(int data)
    {
        Node* newnode = new Node;
        newnode->prev = tail;
        newnode->data = data;
        newnode->next = NULL;
        if(tail==NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        tail = newnode;
    }
    void display()
    {
        Node* temp;
        temp = head;
        while(temp!=NULL)
        {
            cout<<temp->data;
            if(temp->next!=NULL)
            {
                cout<<",";
            }
            temp = temp->next;
        }
    }
};
int main()
{
    doubly_linked_list a;
    a.insert_at_end(676);
    a.insert_at_end(696);
    a.display();
    return 0;
}
