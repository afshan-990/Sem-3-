#include "stack.cpp"
using namespace std;
int main()
{
    stack<int> fah;
    int ch;
    char co;
    do
    {
        cout<<"============================"<<endl;
        cout<<"===========MENU============="<<endl;
        cout<<"Whatchu wanna do bro ?"<<endl;
        cout<<"1.PUSH"<<endl;
        cout<<"2.POP"<<endl;
        cout<<"3.PEEK"<<endl;
        cout<<"4.DIHsplay"<<endl;
        cout<<"ENTER CHOICE : ";
        cin>>ch;
        switch (ch)
        {
            case 1:
                fah.push();
                break;
            case 2:
                fah.pop();
                break;
            case 3:
                fah.peek();
                break;
            case 4:
                fah.display();
                break;
            default:
                cout<<"WTF yo, type a number between 1-4 dumbahh......";
                break;
        }
        cout<<"Yo, do you wanna continue(y/n) : ";
        cin>>co;
    }
    while(co == 'y');
    return 0;
}
