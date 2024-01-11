#include <iostream>
using namespace std ;

int find_ele(int size,int a[],int key)
{
    for( int i=0;i<size;i++)
    {
        if(key==a[i])
        {cout<<"position is: ";
        return i+1;
        }
    }
   return -1; 
}
int main()
{
 int i,n,key;
 cout<<"enter size: ";
 cin>>n;
 
 cout<<"Enter the element u wish to search: ";
 cin>>key;

 int a[n];
 int size=sizeof(a)/sizeof(int);
 cout<<size<<endl;
 for( int i=0;i<size;i++)
    {
        cin>>a[i];
    }
 cout<< find_ele(size,a,key);

 cout<<endl;
 return 0;
}
