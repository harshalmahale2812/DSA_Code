#include <iostream>
using namespace std;
#define MAX 5
int top = -1, Stack[MAX];
void PUSH(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack is FUll";
        return;
    }
    top++;
    Stack[top] = x;
    return;
}
int POP()
{
    int x;
    if (top == -1)
    {
        cout << "Stack is EMPTY";
        return -1;
    }
    x = Stack[top];
    top--;
    return x;
}
int PEEK()
{
    int x;
    if (top == -1)
    {
        cout << "Stack is EMPTY";
        return -1;
    }
    x = Stack[top];
    return x;
}
void DISPLAY()
{
    if (top == -1)
    {
        cout << "Stack is EMPTY";
        return;
    }
    cout << "Elements from Stack are :- ";
    for (int i = top; i > 0; i--)
        cout << Stack[i] << "\t";
    return;
}
int main()
{
    int c, v;
    do
    {
        cout << "Enter 1]PUSP 2]POP 3]PEEK 4]DISPLAY 5]EXIT :- ";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter Value in Stack ";
            cin >> v;
            PUSH(v);
            break;
        case 2:
            v = POP();
            cout << " Deleted Value is :- " << v;
            break;
        case 3:
            v = PEEK();
            cout << " Peek Value is :- " << v;
            break;
        case 4:
            DISPLAY();
            break;
        default:
            cout << " EXIT ";
            c = 5;
        }
    } while (c != 5);
    return 0;
}
