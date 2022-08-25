#include <iostream>
using namespace std;
#define MAX 5
int front = -1, rear = -1, Queue[MAX];
void Enqueue(int x)
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
int Dequeue()
{
    int x;
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty ";
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
void DISPLAY()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty ";
        return;
    }
    cout << "Elements from Queue Are :- ";
    for (int i = front; i <= rear; i++)
    {
        cout << Queue[i] << "\t";
    }
    return;
}
int main()
{
    int choice, v;
    do
    {
        cout << "Enter 1]Enqueue 2]Dequeue 3]Display 4]Exit";
        cin >> choice;
        switch (choice)
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
            DISPLAY();
            break;
        default:
            cout << "Exit";
            choice = 4;
        }
    } while (choice != 4);
    return 0;
}
