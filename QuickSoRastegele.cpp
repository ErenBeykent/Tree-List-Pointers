#include<iostream>
#include<cstdlib>
using namespace std;
void swap(int *a, int *b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}

int Partition(int a[], int kucuk, int buyuk)
{
	int pivot, index, i;
	index = kucuk;
	pivot = buyuk;
 
	for(i=kucuk;i<buyuk;i++)
	{
		if(a[i]<a[pivot])
		{
			swap(&a[i],&a[index]);
			index++;
		}
	}
	swap(&a[pivot], &a[index]);
	return index;
}
 

int RandomPvtPartition(int a[],int kucuk,int buyuk)
{
	int pvt, n, temp;
	pvt = kucuk+n%(buyuk-kucuk+1);
	swap(&a[buyuk], &a[pvt]);
 
	return Partition(a,kucuk,buyuk);
}
 

int QuickSort(int a[],int kucuk,int buyuk)
{
	int pivpos;
	if(kucuk<buyuk)
	{
		pivpos = RandomPvtPartition(a,kucuk,buyuk);
		QuickSort(a,kucuk,pivpos-1);
		QuickSort(a,pivpos+1,buyuk);
	}
	return 0;
}

int main(){
	
	cout<< "Dizi kac eleman olacak?"<<endl;
	int n;
	cin>>n;
	int a[n];
	cout<<n<<" Elemanlari giriniz:";
	int y;
	for(int i=0;i<n;i++){
		cin>>y;
		a[i]=y;
	}
	int boyut=sizeof(a)/sizeof(a[0]);
	QuickSort(a,0,boyut-1);
	for(int i=0;i<boyut;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
