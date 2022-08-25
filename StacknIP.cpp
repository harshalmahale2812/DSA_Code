#include<iostream>
using namespace std;
#define MAX 5 
#define SIZE 50
int top = -1;
int Stack[MAX];
char Stack2[SIZE];
void StackF()
{
    int 
    cout<<"";
}
void IP()
{
    void Push(char el)
{
    top++;
    Stack[top]=el;
    return ;
}
char Pop()
{
    char el;
    el=Stack[top];
    top --;
    return (el);
}
char Peek()
{
    char el;
    el=Stack[top];
    return(el);
}
int Pr(char ch)
{
    switch(ch)
    {
        case '#':return 0;
        case '(':return 1;
        case '+':
        case '-': return 2;
        case '*':
        case '/':return 3;
    }
}

    char infx[50],pofx[50],ch,el;
    int i=0,k=0;
    cout<<"Enter Expression :- ";
    cin>>infx;
    Push('#');
    while((ch=infx[i++])!='\0')
    {
        if (ch == '(')
            Push(ch);
        else if (isalnum(ch))
                pofx[k++]=ch;
            else if (ch == ')')
            {
                while(Peek()!='(')
                pofx[k++]=Pop();
                el=Pop();
            }
            else 
            {
               while(Pr(Peek())>=Pr(ch))
               pofx[k++]=Pop();
               Push(ch);
            }
    }
    while(Peek()!='#')
        pofx[k++]=Pop();
    pofx[k]='\0';
    cout<<"Infix Expression :- "<<infx<<"\n Postfix Expression :- "<<pofx;
    return 0;

}
int main()
{
    int c;
    cout<<"Stack Programs are follows :- 1]Simple Stack   2]Infix to Postfix Expression Using Stack :-  ";
    cin>>c;
    switch(c)
    {
        case 1: StackF();
                break;
        case 2: IP();
                break;
        default: cout<<"Exit";
    }
}