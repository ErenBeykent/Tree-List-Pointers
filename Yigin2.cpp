#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void showstack(stack<int>yigin)
{
	while(!yigin.empty())
	{
		cout<<'\t'<<yigin.top();
		yigin.pop();
	}
}

int main(){
stack<int>s;

s.push(10);
s.push(30);
s.push(20);
s.push(5);
s.push(1);
showstack(s);

cout <<"\ns.size(): " << s.size();
cout <<"\ns.top(): " << s.top();
cout << "\ns.pop(): ";
}

