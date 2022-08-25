#include <iostream>
using namespace std;
struct node
{
    int data;
    node *link;
};
node *head = 0;
void Insert_at_begin(int x)
{
    node *p;
    p = new node;
    p->data = x;
    p->link = 0;
    if (head == 0)
    {
        head = p;
    }
    else
    {
        p->link = head;
        head = p;
    }
    return;
}
void Insert_at_end(int x)
{
    node *p;
    node *t;
    p = new node;
    p->data = x;
    p->link = 0;
    if (head == 0)
        head = p;
    else
    {
        t = head;
        while (t->link != 0)
            t = t->link;
        t->link = p;
    }
    return;
}
void Insert_at_pos(int x, int pos)
{
    node *next;
    node *Previous;
    node *check;
    int count = 0;
    if (head == 0)
    {
        cout << "Singly LL is Empty";
        return;
    }
    if (pos == 1)
    {
        next = new node;
        next->data = x;
        next->link = 0;
        next->link = head;
        head = next;
    }
    else
    {
        check = head;
        count = 1;
        while (count != pos && check != 0)
        {
            Previous = check;
            check = check->link;
            count++;
        }
        if (check != 0)
        {
            next = new node;
            next->data = x;
            next->link = 0;
            Previous->link = next;
            next->link = check;
        }
        else
        {
            cout << "Invalid Position \n";
        }
    }
    return;
}
void DISPLAY()
{
    node *t;
    t = head;
    if (head == 0)
    {
        cout << "Singly LL is Empty";
        return;
    }
    cout << "Elements from Singly LL are :- ";
    while (t != 0)
    {
        cout << t->data << "\t";
        t = t->link;
    }
    return;
}
int main()
{
    int c, v, Position;
    cout << "Singly Linked List \n";
    do
    {
        cout << "Enter 1]Insert at Begin    2]Insert at End     3]Insert at Position    4]Display   5]Exit :- ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter Value at Begin :- ";
            cin >> v;
            Insert_at_begin(v);
            break;
        case 2:
            cout << "Enter Value at End :- ";
            cin >> v;
            Insert_at_end(v);
            break;
        case 3:
            cout << "Enter Position :-";
            cin >> Position;
            cout << "Enter Value at Position :- ";
            cin >> v;
            Insert_at_pos(v, Position);
            break;
        case 4:
            DISPLAY();
            break;
        default:
            cout << "EXIT";
            c = 5;
        }

    } while (c != 5);
    return 0;
}
