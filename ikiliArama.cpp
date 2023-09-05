#include <iostream>
using namespace std;

int IkiliArama(int dizi[],int sol,int sag,int aranan){
	if(sol<=sag){   
		int orta=(sol+(sag-1))/2;    //5
		if(aranan==dizi[orta]){
			return orta;  ///5
		}
		if(dizi[orta]>aranan){
			return IkiliArama(dizi,sol,orta-1,aranan);  ///i
		}
		else{
			return IkiliArama(dizi,orta+1,sag,aranan);   ///i
		}
	}
	return -1;
	
}
void SecmeliS(int dizi[],int n){
	 for (int i = 0; i < n; i++){  
		int min = i;  
		for (int j = i+1; j < n; j++)  {
	
			if (dizi[j] < dizi[min])  {	
			min = j; 		
			
			}
		}	
			int temp = dizi[min];  
			dizi[min]= dizi[i];  
			dizi[i] = temp;  
			
    } 
}
void goster(int dizi[],int n)
{
	for(int i=0;i<n;i++){
		cout<<dizi[i]<<" ";
	}
}
int main(){
    cout<<"Dizide kac elaman olacak?"<<endl;
	int d;
   
	cin>>d;
	int C [d];
	cout<<d<<" Eleman giriniz"<<endl;
	int y;
	for(int i=0;i<d;i++){
		cin>>y;
		C[i]=y;
	}

	int boyut=sizeof(C)/sizeof(C[0]);
	goster(C,boyut);
	SecmeliS(C,boyut);
	cout<<endl;
	goster(C,boyut);

	cout<<"aranan Eleman:";
	int key;
	cin>>key;
	int sonuc;
	sonuc=IkiliArama(C,0,boyut-1,key);
 	if(sonuc==-1){
		cout<<" eleman bulunamadi";
	}
	else{
		cout<<"Eleman bulundu";
	}
		return 0;
}
