#include <iostream>
using namespace std;
struct node
{
    int info;
    node *link;
};
node *top = 0;
void PUSH(int x)
{
    node *p;
    p = new node;
    p->info = x;
    p->link = 0;
    if (top == 0)
        top = p;
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
        cout << "\n Stack is Empty";
        return -1;
    }
    x = top->info;
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
        cout << "\n Stack is Empty";
        return -1;
    }
    x = top->info;
    top = top->link;
    return x;
}
void DISPLAY()
{
    node *t;
    t = top;
    if (t == 0)
    {
        cout << "\n Stack is Empty";
        return;
    }
    while (t != 0)
    {
        cout << t->info << "\t";
        t = t->link;
    }
    return;
}
int main()
{
    int v, c;
    cout << "Program for Linked List using Stack \n";
    do
    {
        cout << "\n Enter 1]PUSH  2]POP  3]DISPLAY 4]PEEK  5]EXIT :-   ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "\nEnter Value :- ";
            cin >> v;
            PUSH(v);
            break;
        case 2:
            v = POP();
            cout << "\nDeleted Value is :- " << v;
            break;
        case 3:
            DISPLAY();
            break;
        case 4:
            v = PEEK();
            cout << "Peek Value is -  " << v;
            break;
        default:
            cout << "\nEXIT";
            c = 5;
        }
    } while (c != 5);
    return 0;
}