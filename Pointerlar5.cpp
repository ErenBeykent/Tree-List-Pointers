#include <iostream>
using namespace std;
int main()
{
	int a[5]={9,8,10,53,12};
	int *p=a;
	
	for(int i=0;i<5;i++){
		
		cout<<"a["<<i<<"] = "<<a[i]<< endl;
		cout<<"a["<<i<<"] adresi=  "<<(p+i)<< endl;
		cout<<"a["<<i<<"] = "<<*(p+i)<< endl;
	 }
}
