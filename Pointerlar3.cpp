#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int *p;
	
	p=&a;
	*p=10;
	p=&b;
	*p=20;
	cout<<"a= " << a << endl;
	cout<<"b= " << b << endl;
	return 0;
}
