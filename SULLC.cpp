#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *top = 0;
void Push(int x)
{
    node *p;
    p = new node;
    p->data = x;
    p->next = 0;
    if (top == 0)
    {
        top = p;
    }
    else
    {
        p->next = top;
        top = p;
    }
    return;
}
int Pop()
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
    top = top->next;
    delete p;
    return x;
}
int Peek()
{

    int x;
    if (top == 0)
    {
        cout << "LL is Empty";
        return -1;
    }
    x = top->data;
    return x;
}
void Display()
{
    if (top == 0)
    {
        cout << "LL is Empty";
        return;
    }
    node *check = top;
    cout << "Value from ll are :- ";
    while (check != 0)
    {
        cout << check->data << " ";
        check = check->next;
    }
    return;
}
int main()
{
    int c, v;
    do
    {
        cout << "1]Push  2]Pop  3]Display   4]Exit ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter value ";
            cin >> v;
            Push(v);
            break;
        case 2:
            v = Pop();
            cout << "Deleted value is :- " << v;
            break;
        case 3:
            Display();
            break;
        default:
            cout << "Exit";
            c = 4;
        }
    } while (c != 4);
    return 0;
}