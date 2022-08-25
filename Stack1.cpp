#include <iostream>
using namespace std;
#define MAX 5
int top = -1;
int Stack[MAX];
void PUSH(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack is Full\n";
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
        cout << "Stack is Empty\n";
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
        cout << "Stack is Empty \n";
        return -1;
    }
    x = Stack[top];
    return x;
}
void DISPLAY()
{
    if (top == -1)
    {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "Elements from Stack are :- ";
    for (int i = 0; i <= top; i++)
        cout << Stack[i] << "\t";
    cout << "\n";
    return;
}
void CHANGE(int x, int pos)
{
    int temp;
    temp = Stack[pos];
    Stack[pos] = x;
    return;
}
int main()
{
    int c, v, pos, x;
    do
    {
        cout << "Enter :- 1]PUSH, 2]POP, 3]PEEK, 4]DISPLAY, 5]Change 6]EXIT \n";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter Value in Stack :- ";
            cin >> v;
            PUSH(v);
            break;
        case 2:
            v = POP();
            cout << "POP Value is :- " << v << "\n";
            break;
        case 3:
            v = PEEK();
            cout << "PEEK Value is :- " << v << "\n";
            break;
        case 4:
            DISPLAY();
            break;
        case 5:
            cout << "Enter Position ";
            cin >> pos;
            cout << "Enter New Value ";
            cin >> x;
            CHANGE(x, pos);
            break;
        default:
            cout << "EXIT";
            c = 5;
        }

    } while (c != 5);
    return 0;
}
