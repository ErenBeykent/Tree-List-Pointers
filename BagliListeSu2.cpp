#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;
 
class Node{
	public :
	int data;
	string ad;
	Node* next;
}*start; 


void add(int x,string z)
{
	if(start==NULL)
	{
	start=new(Node);
	start->data=x;
	start->ad=z;
	start->next=NULL;
	}
	else
	{
		Node* current=start;
		while(current->next!=NULL)
		{
			current=current->next;
		}	
		current->next=new(Node);
		current->next->data=x;
		current->next->ad=z;	
		current->next->next=NULL;
	}
}

void print(Node* n)
{
	while(n!=NULL)
	{
		cout<<"Ogrenci Numarasi:   "<<n->data<<endl;
		cout<<"Ad Soyad:     "<<n->ad<<endl;
		cout<<"Adres:  "<<n->next<<endl;
		n=n->next;
	}
}

void Sil(int x)
{
	Node* current=start;
	Node* prev=NULL;
	while(current && current->data!=x)
	{
		prev=current;
		current=current->next;
	}
	if(current)
	{
		if(prev)
		{
		prev->next=current->next;
		delete current;
		}
		else{
			start=current->next;
			delete current;
		}
	}
	
}
void arama(int x){
	
	Node* current=start;
	
	while(current && current->data !=x)
	{
		current=current->next;
	}
	if(current!=NULL){
		current=current->next;
	cout<<"Bulundu";		
	}else
	{
		cout<<"Bulunamadi";
	}
}

int main()
{
	int menu;
	string h;
	while(1){
	
	cout<<"\n Menu  : 1. Ekleme     2. Arama    3. Sil   4. Gorunutle  5.Cikis"<<endl;
	cin>>menu;
	switch(menu){
		
		case 1:int n;
				cout<<"Bagli listenin kac elemani olacaktir:";
				cin>>n;
				for(int i=1;i<=n;i++)
				{
					int m;
					cout<<i<<". Ogrenci numarasi:";
					cin>>m;
					cout<<i<<". Ad Soyad:        ";
					cin>>h;
					add(m,h);	
				}
				break;
		case 2: n=0;
			 	cout<<"Aramak istediginiz eleman:"<<endl;
			 	cin>>n;
			 	arama(n);
			 	break;
		case 3:cout<<"Bagli listenin silmek istediginiz eleman:";
				cin>>n;
				Sil(n);
				break;
		case 4: print(start);
				break;
		case 5:exit(0);
	}
	
}
	return 0;
}	
	
 
  



