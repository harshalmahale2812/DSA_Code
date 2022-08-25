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
    if (front == 0 && rear == 0)
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
    if (front == 0)
    {
        cout << "Linked List is Empty ";
        return -1;
    }
    x = front->data;
    p = front;
    if (front == rear)
    {
        front = rear = 0;
    }
    else
    {
        front = front->link;
    }
    delete p;
    return x;
}
void Display()
{
    node *t;
    t = front;
    if (front == 0 && rear == 0)
    {
        cout << "Linked List using queue is empty ";
        return;
    }
    cout << "Elements From Linked list are :- ";
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
    cout << "Program for Linked list using Queue\n";
    do
    {
        cout << "Enter 1]Enqueue  2]Dequeue 3]Display 4]Exit :- ";
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