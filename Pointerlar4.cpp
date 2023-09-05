#include <iostream>
using namespace std;
int main()
{
	int a=4;
	int b[4]={5,8,3,6};
	
	int *p;
	p=&a;
	cout <<"p : "<< p << endl;
	
	int *q;
	q=&b[0];
	cout << "b[0]:  " << b[0] << endl;
	cout <<"b[0] adresi : " << q << endl;
	
	q=&b[1];
	cout << "b[1]:  " << b[1] << endl;
	cout <<"b[1] adresi : " << q << endl;
	q=&b[2];
	cout << "b[2]:  " << b[2] << endl;
	cout <<"b[2] adresi : " << q << endl;
	q=&b[3];
	cout << "b[3]:  " << b[3] << endl;
	cout <<"b[3] adresi : " << q << endl;
	
	// 16 sayılı sisteminde 0 1 2 3 4 5 6 7 8 A B C D E F
	
	
}
