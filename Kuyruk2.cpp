#include <iostream>
using namespace std;
#define size 5
int k[size];
int front=0,rear=0;

void ekle(){
	int n;
	if(rear==size){
		cout<<"Kuyruk FULL "<<endl;
	}
	else{
		cout<<"Eleman: "<< endl;
	cin >>n;
	k[rear]=n;
	rear++;
	}
	
}

void goster()
{
	if(front==rear){
		cout<<"Kuyruk empty: "<<endl;
	}
	else{
		for(int i=front;i<rear;i++){
		cout<<k[i]<<"  ";
	}
	
		
	}
}

void cikart()
{
	int temp;
	temp=k[front];
	front++;
	cout<<"cikartildi: "<<temp<<endl;
}

int main()
{
	int s;
	while(1){
	cout<<"1. Ekle  2.Cikart   3. Goster  4.Cikis"<< endl;
	cin>>s;
	switch(s){
		case 1:ekle();
		break;
		case 2:cikart();
		break;
		case 3:goster();
		break;
		case 4:exit(0);
		break;
	}
	
}
return 0;
}
