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

int partition (int arr[], int start, int end) 
{ 
    int pivot = arr[end];    
    int i =(start - 1);   
    for (int j=start; j<=end-1;j++) 
    { 
        if (arr[j]<=pivot) 
        { 
            i++;     
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i+1], &arr[end]); 
    return (i+1); 
} 
  
void quickSort(int arr[],int start,int end) 
{ 
    if (start<end) 
    { 
        int pivPos =partition(arr,start,end); 
        quickSort(arr,start,pivPos - 1); 
        quickSort(arr,pivPos+1,end); 
    } 
} 

int main(){

	cout<<"Dizi kac eleman olacak?"<<endl;
	int n;
	cin>>n;
	int arr[n];
	cout<<n<<" Elemanlari giriniz: ";
	int y;
	for(int i=0;i<n;i++){
		cin>>y;
		arr[i]=y;
	}
	int boyut=sizeof(arr)/sizeof(arr[0]);
	quickSort(arr,0,boyut-1);
	for(int i=0;i<boyut;i++){
		cout<<arr[i]<<" ";
	}
	return 0;

}
