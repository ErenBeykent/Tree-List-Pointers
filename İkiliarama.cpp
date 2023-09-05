#include <iostream>
using namespace std;

int ikiliArama(int dizi[],int sol,int sag,int aranan){
	
	if(sol<=sag){
		
		int orta=(sol+(sag-1))/2;
		if(dizi[orta]==aranan){
			return orta;
		}
		if(dizi[orta]>aranan)  //  sol
		{
			return ikiliArama(dizi,sol,orta-1,aranan);
		}else{
			return ikiliArama(dizi,orta+1,sag,aranan);
		}
	}
	return -1;
}
////selection seçmeli siralama
void secmeliSiralama(int dizi[],int n){
	for(int i=0;i<n;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(dizi[j]<dizi[min])
			{
				min=j;
			}
		    }
			int temp=dizi[min];
			dizi[min]=dizi[i];
			dizi[i]=temp;
		
	}
void gosterdizi(int dizi[],int n){
	for(int i=0;i<n;i++){
		cout<<dizi[i]<<" ";
	}
} 
}
int main(){
	cout<<"Kac eleman olacak:";
	int n;
	cin>>n;
	
	int a[n];
	int m;
	for(int i=0;i<n;i++){
		cin>>m;
		dizi[i]=m;
	}

	//siralacak
	secmeliSiralama(a,4);
	//ikili arama
	cout<<ikiliArama(a,0,3,36);
	return 0;
}
