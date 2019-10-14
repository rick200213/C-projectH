/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;
int main()
{int n,m;
cout<<"Enter the limit for array a and b resp"<<endl;
cin>>n;
cin>>m;
int a[n];
int b[m];
int c[m+n];
cout<<"Enter the elements of array a";
for(int i=0;i<n;i++)
{cin>>a[i];
}
cout<<"Enter the elements of array b";
for(int i=0;i<m;i++)
{cin>>b[i];
}
int k=0;
for(int i=0;i<n;i++)
{c[k++]=a[i];
}
for(int i=0;i<m;i++)
{c[k++]=b[i];
}
cout<<"The combined loop is";
for(int i=0;i<m+n;i++)
{cout<<c[i]<<" ";
}
return 0;
} 