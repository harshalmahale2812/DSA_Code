#include <iostream>
using namespace std;
#define MAX 5
int top = -1, Stack[MAX];
void PUSH(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stackis Full";
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
        cout << "Stack is Empty";
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
        cout << "Stack is Empty";
        return -1;
    }
    x = Stack[top];
    return x;
}
void DISPLAY()
{
    if (top == -1)
    {
        cout << "Stack is EMpty annot dispaly any vLA";
        return;
    }
    cout << "Ele from tack are :- ";
    for (int i = top; i >= 0; i--)
        cout << Stack[i] << "\t";
    return;
}
int main()
{
    int c, v;
    do
    {

        cout << "Enter 1]Push 2]POP 3]Peek 4]Display 5]Exit";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "Enter value ";
            cin >> v;
            PUSH(v);
            break;
        case 2:
            v = POP();
            cout << "Deleted VAlue is :- " << v;
            break;
        case 3:
            v = PEEK();
            cout << "Peek VAlue is :- " << v;
        case 4:
            DISPLAY();
            break;
        default:
            cout << "Exit";

            c = 5;
        }
    } while (c != 5);
    return 0;
}