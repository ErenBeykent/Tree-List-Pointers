#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	int*p;
	p=&a;
	cout <<"p = " << p << endl;
	
	*p=5;
	cout<<"*p = " << *p << endl;
	
	b=*p;
	cout <<"b = " << b << endl;
}
