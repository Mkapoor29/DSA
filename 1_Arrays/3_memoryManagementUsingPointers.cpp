#include <iostream>
using namespace std;

int main()
{
    // cout<<"Hello World";
    int *p;
    // p will get a memory address in stack and will point to a memory location stored in heap.
    p = new int[5];
    
    for (int x = 0; x < 5; x++) 
    {
		cin >> p[x];
	}
	cout << "You entered: ";
	for (int x = 0; x < 5; x++) 
	{
		cout << p[x] << " ";
	}
    return 0;
}
