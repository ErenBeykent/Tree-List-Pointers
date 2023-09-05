#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node(int x){
		this->data=x;
		this->next=NULL;
	}
};

Node * ekle(Node * head,int data){
	
	if(head==NULL){
	return new Node(data);
	}
	else{
	head->next=ekle(head->next,data);
	}
	return head;
}

void goster(Node* head){
	if(head==NULL){
		cout<<" ";
		return;
	}else{
		cout<<head->data<<" ";
		goster(head->next);
	}
}
void tersgoster(Node* head){
	if(head==NULL){
		cout<<" ";
		return;
	}
	else{
		tersgoster(head->next);
		cout<<head->data<<" ";
	}
}
bool arama(Node* head, int data){
	if(head==NULL){
		return false;
	}
	if(head->data==data){
		return true;
	}
	else{
		return arama(head->next,data);
	}
}

Node* sil(Node* head, int data){
	if(head==NULL){
		return NULL;
	}
	Node* position=sil(head->next,data);
	if(head->data==data){
		delete head;
		return position;
	}
	else{
		head->next=position;
		return head;
	}
}

int main(){
	Node* head=NULL;
	head=ekle(head,3);
	head=ekle(head,6);
	head=ekle(head,9);
	goster(head);
	bool sonuc;
	sonuc=arama(head,6);
	if(sonuc==1){cout<<"Bulundu ";
	}else {cout<<"Bulunamadi";
	}
	head=sil(head,6);
	goster(head);
	return 0;
}
