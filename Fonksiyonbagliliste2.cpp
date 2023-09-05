#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
}*start;

void add(int x)
{
	if(start==NULL)
	{
	start=new(Node);
	start->data=x;
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
		current->next->next=NULL;
	}
	
}

void print(Node* n)
{
	while(n!=NULL)
	{
		cout<<"DATA: " << n->data << endl;
		cout<<"Adres:  " << n->next << endl;
		n=n->next;
	}
}

void silmek(int x)
{
	Node* current=start;
	Node* prev=NULL;
	while(current && current ->data!=x)
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
	if(current!=NULL)
	{
		current=current->next;
		cout << "Bulundu";
	}
	else
	{
		cout << "Bulunamadý";
	}
	
}

int main()
{
    int n;
	cout<<"Bagli listenin kac elemani olacaktir: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	int m;
	cout<<"Bir deger giriniz: ";
	cin>>m;
	add(m);
	}
	
	print(start);
	n=0;
	
	cout << "Bagli listenin silmek istediginiz eleman: ";
	cin>> n;
	silmek(n);
	print(start);
	
	
}
