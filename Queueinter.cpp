#include <iostream>
using namespace std;
#define MAX 5
int front = -1, rear = -1, Queue[MAX];
void Insert(int x)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is Full ";
        return;
    }
    if (front == -1)
    {
        front = 0;
    }
    rear++;
    Queue[rear] = x;
    return;
}
int Delete()
{
    int x;
    if (rear == -1)
    {
        cout << "Queue is Empty";
        return -1;
    }
    x = Queue[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
        front++;
    return x;
}
void Display()
{
    if (rear == -1)
    {
        cout << "Queue is Empty";
        return;
    }
    cout << "Elements From Queue are :- ";
    for (int i = front; i <= rear; i++)
        cout << Queue[i] << " ";
    return;
}
int main()
{
    int c, v;
    do
    {
        cout << "Enter 1]Insert   2]Delete   3]Display   4]Exit :- ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter the value :- ";
            cin >> v;
            Insert(v);
            break;
        case 2:
            v = Delete();
            cout << "Deleted Value is :- " << v;
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
