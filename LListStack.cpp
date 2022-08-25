#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *top = 0;
void Insert(int x)
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
int Delete()
{
    node *p;
    int x;
    if (top == 0)
    {
        cout << "Linked List Using Stack is Empty ";
        return -1;
    }
    x = top->data;
    p = top;
    top = top->link;
    delete p;
    return x;
}
int Check()
{
    node *p;
    int x;
    if (top == 0)
    {
        cout << "Linked List using Stack is Empty ";
        return -1;
    }
    x = top->data;
    return x;
}
void Show()
{
    node *t;
    t = top;
    if (top == 0)
    {
        cout << "Linked List Using Stack is Empty, You Cannor Display any value ";
        return;
    }
    cout << "Elements from stack are :- ";
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
        cout << "Enter 1]Insert   2]Delete    3]Check     4]Show      5]Exit  :- ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter Value :- ";
            cin >> v;
            Insert(v);
            break;
        case 2:
            v = Delete();
            cout << "Deleted Value is :- " << v;
            break;
        case 3:
            v = Check();
            cout << "Top Element is :- " << v;
            break;
        case 4:
            Show();
            break;
        defaut:
            cout << "Exit";
            c = 5;
        }
    } while (c != 5);
    return 0;
}