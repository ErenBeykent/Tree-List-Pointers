#include <iostream>
#include <bits/stdc++.h>
using namespace std;

	class Node{
		public:
			int data;
			Node *next;
	           }*yeni,*ilk,*son,*iki;
     int main()
	{
     	
     	yeni=(Node*)malloc(sizeof(Node));
     	cout <<"Adres : " <<yeni<< endl;
     	
     	yeni->data=2020;
     	yeni->next=NULL;
     	
     	ilk=yeni;
     	
     	cout <<"ilk - > data: " << ilk->data <<" ilk - > adres : " <<ilk-> next << endl;
     	
     	cout << "\n------------------------\n";
     	
     	yeni=(Node*)malloc(sizeof(Node));
     	cout <<"Adres : " <<yeni<< endl;
     	
     	ilk->next=yeni;
     	yeni->data=2021;
     	yeni->next=NULL;
     	
     	son=yeni;
     	
     	cout <<"ilk - > data: " << ilk->data <<" ilk - > adres : " <<ilk-> next << endl;
     	cout<<" son -> data : " <<son->data << " son -> adres : " <<son->next<<endl;
     	
     	cout << "\n------------------------\n";
     	yeni=(Node*)malloc(sizeof(Node));
     	cout <<"Adres : " <<yeni<< endl;
     	son->next=yeni;
     	yeni->data=2022;
     	yeni->next=NULL;
     	iki=yeni;
     	cout <<"ilk - > data: " << ilk->data <<" ilk - > adres : " <<ilk-> next << endl;
     	cout<<" son -> data : " <<son->data << " son -> adres : " <<son->next<<endl;
     	cout <<"iki - > data: " << iki->data <<" iki - > adres : " <<iki-> next << endl;
	}	
	
	

