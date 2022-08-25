#include <iostream>
using namespace std;
#define MAX 5
int top = -1, Stack[MAX];
void Push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack is Full, Cannot Insert a Value ";
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
        cout << "Stack is Empty, Cannot Delete a Value ";
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
        cout << "Stack is Empty, Cannot Check a Value ";
        return -1;
    }
    x = Stack[top];
    return x;
}
void Show()
{
    if (top == -1)
    {
        cout << "Stack is Empty, Cannot Display Any Value ";
        return;
    }
    cout << "Elements From Stack are :- ";
    for (int i = top; i >= 0; i--)
        cout << Stack[i] << "\t";
    return;
}
int main()
{
    int c, v;
    do
    {
        cout << "\nEnter 1]PUSH 2]POP 3]PEEK 4]DISPLAY 5]EXIT \n";
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
            cout << "Pop Value is :- " << v;
            break;
        case 3:
            v = Peek();
            cout << "Peek Value is :- " << v;
            break;
        case 4:
            Show();
            break;
        default:
            cout << "EXIT";
            c = 5;
        }
    } while (c != 5);
    return 0;
}