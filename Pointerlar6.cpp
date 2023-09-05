#include <iostream>
using namespace std;
int main()
{
	int a=5;
	int b[4]={8,9,5,9};
	
	cout <<"dizinin boyutu= "<< sizeof(b) << endl;
	cout <<"a'nin boyutu= " << sizeof(a) << endl; 
	cout<< "Dizinin eleman sayisi= " << sizeof(b)/sizeof(int);
}
