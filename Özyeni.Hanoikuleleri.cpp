#include <iostream>
using namespace std;

void hanoi(int n,char kaynak,char hedef ,char temp){
	if(n==1){
		cout<<"Disk 1i "<<kaynak<<" Kuleden "<<hedef<<" kuleye tasi"<<endl;
		return;
	}
	else{
		hanoi(n-1,kaynak,temp,hedef);
		cout<<"Disk "<<n<<"i "<<kaynak<<" Kuleden "<<hedef<<" kuleye tasi"<<endl;
		hanoi(n-1,temp,hedef,kaynak);
	}
}

int main(){
	int n;
	cin>>n;
	hanoi(n,'A','C','B');
	
}
