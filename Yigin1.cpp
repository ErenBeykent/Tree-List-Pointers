#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void gosterYigin(stack <int> x)
{
	while(!x.empty())
	{
		cout << " \t "<<x.top();
		x.pop();
	}
}
int main(){
	stack <int> s;
	int n;
	cout<<"Yiginin kac elemani olacak: "<< endl;
	cin>>n;
	for(int i=1;i<=n;i++){
		int m;
		cout<<"Deger giriniz: "<< endl;
		cin>>m;
		s.push(m);
	}
	/*stack <int> s;
	s.push(100);
	s.push(105);
	s.push(123);
	gosterYigin(s);
	cout<< " Yiginin boyutu: " << s.size()<< endl;
	s.pop();*/
	cout<<"--------------------------"<<endl;
	gosterYigin(s);
	cout<< " Yiginin boyutu: " << s.size()<< endl;
return 0;	
}
