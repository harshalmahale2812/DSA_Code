#include <iostream>
using namespace std;
#define MAX 5
int top = -1;
int stack[MAX];
void push(int x)
{
    if (top == MAX - 1)
    {
        cout << "stack is full\n";
        return;
    }
    top = top + 1;
    stack[top] = x;
    return;
}
int pop()
{
    int x;
    if (top == -1)
    {
        cout << "stack is empty:\n";
        return -1;
    }
    x = stack[top];
    top = top - 1;
    return x;
}
int peek()
{
    int x;
    if (top == -1)
    {
        cout << "stack is empty:\n";
        return -1;
    }
    x = stack[top];
    return x;
}
void display()
{
    if (top == -1)
    {
        cout << "stack is empty:\n";
        return;
    }
    cout << "copmonent of stack are:\n";
    for (int i = top; i >= 0; i--)
        cout << stack[i] << "\t";
    cout << ("\n");
    return;
}
int main()
{
    int choice, value;
    do
    {
        cout << "\nEnter 1.push 2.pop 3.peek 4.display 5.exit:\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "enter the push:\n";
            cin >> value;
            push(value);
            break;
        case 2:
            value = pop();
            cout << "value of pop\n"
                 << value;
            break;
        case 3:
            value = peek();
            cout << "value of peek\n"
                 << value;
            break;
        case 4:
            display();
            break;

        default:
            cout << "exit\n";
            choice = 5;
        }
    } while (choice != 5);
    return 0;
}