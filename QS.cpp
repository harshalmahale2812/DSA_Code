#include <iostream>
using namespace std;
#define MAX 5
int top = -1, front = -1, rear = -1, Stack[MAX], Queue[MAX];
void Push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack is Full, Cannot Insert a new Value\n ";
        return;
    }
    top++;
    Stack[top] = x;
    return;
}
int Pop()
{
    int x;
    if (top == -1)
    {
        cout << "Stack is Empty,Cannot Delete any Value \n";
        return -1;
    }
    x = Stack[top];
    top--;
    return x;
}
int Peek()
{
    int x;
    if (top == -1)
    {
        cout << "Stack is Empty,Cannot Check any Value \n";
        return -1;
    }
    x = Stack[top];
    return x;
}
void Display()
{
    if (top == -1)
    {
        cout << "Stack is Empty,Cannot Display any Value \n";
        return;
    }
    cout << "Elements From Stack are :- ";
    for (int i = top; i >= 0; i--)
        cout << Stack[i] << "\t";
    cout << endl;
    return;
}
void Enqueue(int x)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is Full,Cannot insert any New Value \n";
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    Queue[rear] = x;
    return;
}
int Dequeue()
{
    int x;
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Emplty,Cannot Delete Any Value \n";
        return -1;
    }
    x = Queue[front];
    if (front == rear)
        front = rear = -1;
    else
        front++;
    return x;
}
void Show()
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is Enpty,Cannot Display any Value \n";
        return;
    }
    cout << "Elements from Queue are :- ";
    for (int i = front; i <= rear; i++)
        cout << Queue[i] << "\t";
    cout << endl;
    return;
}

int main()
{
    int ds, c, v;
    do
    {
        cout << "Choose Data Structure \n Enter 1]Stack 2]Queue 3]Exit :- ";
        cin >> ds;
        switch (ds)
        {
        case 1:
            cout << "You Choose Stack, Operations are as Follows\n";
            do
            {
                cout << " Enter 1]Push  2]Pop  3]Peek  4]Display  5]Exit :- ";
                cin >> c;
                switch (c)
                {
                case 1:
                    cout << "Enter Value :- ";
                    cin >> v;
                    Push(v);
                    break;
                case 2:
                    v = Pop();
                    cout << "Deleted Value is :- " << v << endl;
                    break;
                case 3:
                    v = Peek();
                    cout << "Peek value is :- " << v << endl;
                    break;
                case 4:
                    Display();
                    break;
                default:
                    cout << "Exit";
                    c = 5;
                }
            } while (c != 5);
            break;
        case 2:
            cout << "You Choose Linear Queue,Operations are as Follows\n";
            do
            {
                cout << "Enter 1]Enqueue  2]Dequeue  3]Display  4]Exit :- ";
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
                    cout << "Deleted Element is :- " << v << endl;
                    break;
                case 3:
                    Show();
                    break;
                default:
                    cout << "Exit";
                    c = 4;
                }
            } while (c != 4);
            break;
        default:
            cout << "Exit \n";
            break;
        }
    } while (ds != 3);
    return 0;
}