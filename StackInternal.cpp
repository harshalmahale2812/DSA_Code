#include <iostream>
using namespace std;
#define SIZE 6
int top = -1, Stack[SIZE];
void Push(int x)
{
    if (top == SIZE - 1)
    {
        cout << "\nStack is Overflow ";
        return;
    }
    top = top + 1;
    Stack[top] = x;
    return;
}
int Pop()
{
    int x;
    if (top == -1)
    {
        cout << "\nStack is Underflow ";
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
        cout << "\nStack is underflow ";
        return -1;
    }
    x = Stack[top];
    return x;
}
void display()
{
    if (top == -1)
    {
        cout << "\nStack is Underflow ";
        return;
    }
    cout << "\nValue from stack are :- ";
    for (int i = top; i >= 0; i--)
        cout << Stack[i] << " ";
    return;
}
int main()
{
    int c, v;
    do
    {
        cout << "\n1]Push    2]Pop    3]Peek     4]Display   5]Exit  :-  ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "\nEnter Value in Stack ";
            cin >> v;
            Push(v);
            break;
        case 2:
            v = Pop();
            cout << "\nDeleted Value is :- " << v;
            break;
        case 3:
            v = Peek();
            cout << "\nPeek value is :- " << v;
            break;
        case 4:
            display();
            break;
        default:
            cout << "\nExit";
            c = 5;
        }
    } while (c != 5);
    return 0;
}