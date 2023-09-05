#include <iostream>
using namespace std;

int faktoriyel(int n){
	if(n<=1){
		return 1;
	}
	else{
		return n*faktoriyel(n-1);
	}
	
}                ////faktoriyel(4) return 4*faktoriyel(3); return 4*6=24
                 ////faktoriyel(3) return 4*faktoriyel(2); return 3*2=6
                 ////faktoriyel(2) return 4*faktoriyel(1); return 2*1=2
                 ////faktoriyel(1) return 1;
                 
int iterfaktoriyel(int n){
	
	int sonuc=1;
	for(int i=n;i>0;i--){
		sonuc=sonuc*i;
	}
	
	return sonuc;
}
int topla(int n){
	int sonuc=0;
	if(n==1){return 1;
	}
	else{ sonuc=topla(n-1);
	}
	return sonuc+n;
	
}
int ust(int a ,int n){
	if(n==0){return 1;
	}
	else if(n==1){return a;
	}
	else{
		return a*ust(a,n-1);
	}
	
}
int fibo(int n){
	if(n<=1){return n;
	}
	else{
		return fibo(n-2)+fibo(n-1);
	}
	
	
}
int iterfibo(int n){
	int s1=1,s2=0,sonuc=0;
	for(int i=0;i<n;i++){
		sonuc=s1+s2;
		s1=s2;
		s2=sonuc;
	}
	
}
int main(){
	int n,i=0;
	cin>>n;
	while(i<n){
		cout<<" "<<fibo(i);
		i++;
	}
	cout<<endl;
	cout<<iterfibo(n);
	/*int a,n;
	cin>>a>>n;
cout<<faktoriyel(n)<<endl;
	cout<<iterfaktoriyel(n)<<endl;
	cout<<topla(n)<<endl; 
	cout<<a<<" uzeri "<< n <<"= "<< ust(a,n);
	return 0;*/
}
