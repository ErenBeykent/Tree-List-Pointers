#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
};
Node *yeni=NULL;
Node *top=NULL;
Node *temp=NULL;
void push(int x)
{
	yeni=new(Node);
	yeni->data=x;
	yeni->next=top;
	top=yeni;
}

void display()
{
	temp=new(Node);
	temp=top;
	if(temp==NULL){
		cout<<"Yigin bos" << endl;
	}
	else{
		while(temp!=NULL){
		cout << temp->data<< endl;
		temp=temp->next;
	}
	
		
	}
}

void pop()
{
	if(top==NULL){
		cout <<"Yigin Bos"<< endl;
	}
	else{
	cout<<"En ustteki eleman: "<<top->data<< endl;
	top=top->next;
	}
	
}

int main()
{
	int s;
	int n;
	while(1){
	
	cout<<"1. Push   2.Pop   3.Goster   4.Cikis"<< endl;
	cin >> s;
	switch (s){
		
		case 1: cout <<"Eleman: "<<endl;
		cin >> n;
		push(n);
		       break;
		case 2:pop();
		       break;
	    case 3: display();
		       break;
		case 4:exit(0);
		       	      
		
	}
}
	return 0;
}
