#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *front = 0, *rear = 0;
void Enqueue(int x)
{
    node *p;
    p = new node;
    p->data = x;
    p->link = 0;
    if (front == 00 && rear == 0)
    {
        front = rear = p;
    }
    else
    {
        rear->link = p;
        rear = p;
    }
    return;
}
int Dequeue()
{
    node *p;
    int x;
    if (front == 0 && rear == 0)
    {
        cout << "LL is Empty";
        return -1;
    }

    x = front->data;
    p = front;
    if (front == rear)
    {
        front = rear = 0;
    }
    else
        front = front->link;
    delete p;
    return x;
}
int Check()
{
    node *p;
    int x;
    if (front == 0 && rear == 0)
    {
        cout << "LL is Empty";
        return -1;
    }

    x = front->data;
    return x;
}
void DISPLAY()
{
    node *t;
    t = front;
    if (front == 0 && rear == 0)
    {
        cout << "LL is Empty";
        return;
    }
    cout << "Elem from LL are :- ";
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
        cout << "Enter 1]Enqueue 2]Dequeue 3]Check 4]DISPLAY 5]EXiT \n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter Value :- ";
            cin >> v;
            Enqueue(v);
            break;
        case 2:
            v = Dequeue();
            cout << "Deleted Value is :- " << v;
            break;
        case 3:
            v = Check();
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
