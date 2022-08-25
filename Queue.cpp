#include<iostream>
using namespace std;
#define MAX 5
int front = -1,rear = -1,Queue[MAX];
void Enqueue(int x)
{
    if( rear == MAX -1)
    {   
        cout<<"Queue is Full ";
        return;
    }
    if(front == -1)
    front = 0;
    rear ++;
    Queue[rear]=x;
    return;
}
int Dequeue()
{
    int x;
    if(front == -1 && rear == -1)
    {
        cout<<"Queue is Empty ";
        return -1;
    }
    x=Queue[front];
    if(front == rear)
    front = rear = -1;
    else
    front ++;
    return x;
}
void Show()
{
    if(front == -1)
    {
        cout<<"Queue is Empty ";
        return ;
    }
    cout<<"Elemets from Queue are :- ";
    for(int i=front;i<rear;i++)
    cout<<Queue[i]<<"\t";
    return;
}
int main()
{
    int c,v;
    do
    {
     cout<<"\nEnter 1]EnQueue 2]Dequeue 3]Display 4]Exit";
     cin>>c;
     switch (c)
     {
     case 1: cout<<"Enter Value :- ";
             cin>>v;
             Enqueue(v);
             break;
     case 2: v=Dequeue();
             cout<<"Deleted Element is :- "<<v;
             break;
     case 3: Show();
             break;
     default:cout<<"Exit";
             c=4;     
     }   
    } while ( c != 4);
    return 0;
}