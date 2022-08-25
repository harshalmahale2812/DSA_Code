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
void DeQ()
{
    int x;
    if (rear == -1)
    {
        cout << "queue is full cant delete  ";
        return;
    }
    x = Queue[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
    return;
}
void Display()
{
    if (rear == -1)
    {
        cout << "queue is empty cant display  ";
        return;
    }
    for (int i = front; i <= rear; i++)
    {
        cout << Queue[i] << "       ";
    }
    return;
}
int main()
{
    int
}