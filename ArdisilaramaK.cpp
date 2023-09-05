#include <iostream>
using namespace std;

int ardisilArama(int dizi[],int n, int aranan){
	
	for(int i=0;i<n;i++){
		if(dizi[i]==aranan){
			return i;
		}
	}
	return -1;
}

int main(){
	int a[]={15,11,36,96};
	cout <<ardisilArama(a,4,11);
	return 0;
}
