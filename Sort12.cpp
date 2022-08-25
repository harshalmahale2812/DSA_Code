#include<iostream>
using namespace std;
void BS(int Data[],int t)
{
    int temp;
    for(int i=0;i<t-1;i++)
    {
        for(int j=0;j<t-1;j++)
        {
            if (Data[j]>Data[j+1])
            {
                temp=Data[j];
                Data[j]=Data[j+1];
                Data[j+1]=temp;
            }
        }
    }
}
void SS(int Data[],int t)
{
    int flag,temp;
    for(int i=0;i<t-1;i++)
    {
        flag=i;
        for(int j=i+1;j<t;j++)
        {
            if(Data[j]<Data[flag])
            flag=j;
        }
        temp=Data[i];
        Data[i]=Data[flag];
        Data[flag]=temp;
    }
}
int main()
{ 
    int n,Row[20],c;
    cout<<"Enter Size of Row :- ";
    cin>>n;
    cout<<"Enter "<<n<<" Elements :- ";
    for(int i=0;i<n;i++)
    cin>>Row[i];
    cout<<" Original Row Before sorting :- ";
    for(int j=0;j<n;j++)
    cout<<Row[j]<<"\t";
    do
    {
        cout<<"\n Enter 1]Bubble Sort 2]Selection Sort 3]Exit \n";
        cin>>c;
        switch (c)
        {
        case 1: cout<<"Bubble Sort \n";
                BS(Row,n);
                cout<<"Row After Sorting :- ";
                for(int i=0;i<n;i++)
                cout<<Row[i]<<"\t";
                break;
        case 2: cout<<"Selection Sort \n";
                SS(Row,n);
                cout<<"Row After Sorting :- ";
                for(int i=0;i<n;i++)
                cout<<Row[i]<<"\t";
                break;
        default: cout<<"EXIT";
                 c=3;
            
        }
        
    } while ( c != 3);
    
}