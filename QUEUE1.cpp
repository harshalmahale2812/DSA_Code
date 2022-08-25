#include <iostream>
using namespace std;
#define MAX 5
int front = -1, rear = -1, Queue[MAX];
void EnQueue(int x)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is Full, Cannot Insert a New Value \n";
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    Queue[rear] = x;
    return;
}
int DeQueue()
{
    int x;
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty, Cannot Delete a Value \n";
        return -1;
    }
    x = Queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front++;
    return x;
}
void Display()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Empty, Cannot Display any Value\n";
        return;
    }
    cout << "Queue Elements :- ";
    for (int i = front; i <= rear; i++)
        cout << Queue[i] << "\t";
    cout << endl;
    return;
}
int main()
{
    cout << "Program for QUEUE Process\n";
    int c, v;
    do
    {
        cout << "Enter 1]EnQueue  2]DeQueue  3]Display  4]Exit  :-  ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Insert Value :- ";
            cin >> v;
            EnQueue(v);
            break;
        case 2:
            v = DeQueue();
            cout << "Deleted Value is :- " << v << endl;
            break;
        case 3:
            Display();
            break;
        default:
            cout << "EXIT";
            c = 4;
        }
    } while (c != 4);
    return 0;
}