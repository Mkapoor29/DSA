#include <iostream>
using namespace std ;
int main(){
int a[]={1,4,-9,78,56,96};
int i,s;
s=sizeof(a)/sizeof(a[0]);
cout<<"the array elemnts are:"<<endl;
for(i=0;i<s;i++)
{
    cout<<"a["<< i<<"]"<<" = "<<a[i] <<endl;
}
cout<<endl;
return 0;
}
