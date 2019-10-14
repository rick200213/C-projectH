/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"Enter the limit of the array"<<endl;
   cin>>n;
   int a[n];
   cout<<"Enter the elements of the array"<<endl;
   for(int i=0;i<n;i++)
   {
   cin>>a[i];
   }
   cout<<"The elements of the array are"<<endl;
   for(int i=0;i<n;i++)
   {cout<<a[i]<<" ";
   }
   for(int i=0;i<n;i++)
   {for(int j=0;j<n-i-1;j++)
       {if(a[j]>a[j+1])
        {int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
       }
   }
   cout<<"The sorted array is"<<endl;
   for(int i=0;i<n;i++)
   {cout<<a[i]<<" ";
   }
   
   

    return 0;
}
