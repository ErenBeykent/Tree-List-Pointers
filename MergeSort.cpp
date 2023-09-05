#include <iostream>
using namespace std;

void divide(int dizi[],int l,int m,int r){
	int n1=m-l+1;
	int n2=r-m;
	int L[n1];
	int R[n2];
	for(int i=0;i<n1;i++){
		L[i]=dizi[l+i];
	}
	for(int j=0;j<n2;j++){
		R[j]=dizi[m+1+j];
	}
	
	int i=0,j=0;
	int k=l;
	while(i<n1 && j<n2){
		if(L[i]<=R[j])
		{
			dizi[k]=L[i];
			i++;
		}else{
			dizi[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<n1){
		dizi[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		dizi[k]=R[i];
		j++;
		k++;
	}
}
void MergeSort(int dizi[], int start,int end){
	if(start>=end){
		return ;
	}
	int m=(start+end-1)/2;
	MergeSort(dizi,start,m);
	MergeSort(dizi,m+1,end);
	divide(dizi,start,m,end);
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
	MergeSort(A,0,boyut-1);
	for(int i=0;i<boyut;i++){
		cout<<A[i]<<" ";
	}
	return 0;

}
