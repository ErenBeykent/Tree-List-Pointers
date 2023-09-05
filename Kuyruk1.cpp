#include <iostream>
#include <queue>
using namespace std;

void goster(queue <int> x)
{
	while(!x.empty()){
	cout<<" "<<      x.front();
	x.pop();
	}
	cout<<"\n";
}
int main()
{
	
	
	queue <int> kuyruk;
	kuyruk.push(2020);
	kuyruk.push(2021);
	kuyruk.push(2022);
	goster(kuyruk);
	kuyruk.pop();
	goster(kuyruk);
	kuyruk.push(2023);
	goster(kuyruk);
	return 0;
}
