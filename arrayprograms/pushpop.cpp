/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int n;
int a[10];
int top=0;
void push(int);
void pop();
void display();
void push(int x)
{if(top==9)
{cout<<"Overflow";
}
else
{a[top]=x;
top=top+1;
}
}
void pop()
{
int x;
if(top==-1)
{cout<<"Underflow";
}
else
{x=a[top];
cout<<"Element to be popped"<<x;
top=top-1;
}
}
void display()
{for(int i=top-1;i>=0;i--)
{
    cout<<a[i]<<" ";
}
}
int main()
{
int b;
cout<<"Enter choice 1for push,2 for pop,3 for display for display,4 for exit"<<endl;
do
{
cout<<"choice"<<endl;    
cin>>b;   
switch(b)
{
case 1:
{
int x;
cout<<"Enter element to be pushed";
cin>>x;
push(x);
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
cout<<"Exit"<<endl;
break;
}
default:
{
cout<<"Wrong choice"<<endl;
}
}
}while(b!=4);   
}

