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
    void insert_at_start(int data)
    {
        Node* newnode = new Node;
        newnode->prev = NULL;
        newnode->data = data;
        newnode->next = head;
        if(head==NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        head->prev = newnode;
        head = newnode;
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
    a.insert_at_start(676767);
    a.insert_at_start(696969);
    a.display();
    return 0;
}
