#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *top = 0;
void PUSH(int x)
{
    node *p;
    p = new node;
    p->data = x;
    p->link = 0;
    if (top == 0)
    {
        top = p;
    }
    else
    {
        p->link = top;
        top = p;
    }
    return;
}
int POP()
{
    node *p;
    int x;
    if (top == 0)
    {
        cout << "LL is Empty";
        return -1;
    }

    x = top->data;
    p = top;
    top = top->link;

    delete p;
    return x;
}
int PEEK()
{
    node *p;
    int x;
    if (top == 0)
    {
        cout << "LL is Empty";
        return -1;
    }

    x = top->data;
    return x;
}
void DISPLAY()
{
    node *t;
    t = top;
    if (top == 0)
    {
        cout << "LL is Empty ";
        return;
    }
    cout << "LL Elements are :- ";
    while (t != 0)
    {
        cout << t->data << "\t";
        t = t->link;
    }
    return;
}
int main()
{
    int c, v;
    do
    {
        cout << "Enter 1]PUSH 2]POP 3]PEEK 4]DISPLAY 5]EXiT \n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter Value :- ";
            cin >> v;
            PUSH(v);
            break;
        case 2:
            v = POP();
            cout << "Deleted Value is :- " << v;
            break;
        case 3:
            v = PEEK();
            cout << "Checked value is :-" << v;
            break;
        case 4:
            DISPLAY();
            break;
        default:
            cout << "Exit";
            c = 5;
        }

    } while (c != 5);
    return 0;
}
