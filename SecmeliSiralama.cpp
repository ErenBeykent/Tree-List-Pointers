#include <iostream>
using namespace std;

void SecmeliS(int dizi[], int n){
	
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
}

void BubleSO(int dizi[],int n)
{
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(dizi[i]>dizi[j])
			{
				int temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
			}
		}
	}
}
void IBubleSO(int dizi[],int n)
{
	bool swap;
	for(int i=0;i<n;i++){
		swap=false;
		for(int j=i;j<n;j++){
			if(dizi[i]>dizi[j])
			{
				int temp=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=temp;
				swap=true;
			}
		}
		if(swap==false)
		break;
	}
}
int main(){

	cout<<"Dizi kac eleman olacak?"<<endl;
	int n;
	cin>>n;
	int A[n];
	cout<<n<<" Elemanlari giriniz: ";
	int y;
	for(int i=0;i<n;i++){
		cin>>y;
		A[i]=y;
	}
	int boyut=sizeof(A)/sizeof(A[0]);
	IBubleSO(A,boyut);
	for(int i=0;i<boyut;i++){
		cout<<A[i]<<" ";
	}
	return 0;

}
