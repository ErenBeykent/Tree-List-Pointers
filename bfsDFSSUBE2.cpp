#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
void kenarEkle(vector <int> g[],int u, int v){  //// (4,3)
	g[u].push_back(v);
	
}
 void BFS(int s,vector <int> g[],bool visit[]){
 	queue<int> q;
 	q.push(s);
 	visit[s]=true;
 	while(!q.empty()){
 	int u=q.front();
 	cout<<u<<" ";
 	q.pop();
 	for(int i=0;i<g[u].size();i++){
 		if(!visit[g[u][i]]){
 			q.push(g[u][i]);
 			visit[g[u][i]]=true;
		 }
	 }
	 }
 	
 }
 
 void DFS(int s,vector <int> g[],bool visit[]){
 	stack <int> stk;
 	stk.push(s);
 	visit[s]=true;
 	while(!stk.empty())
		{
		int u=stk.top();
		cout<<u<<" ";
		stk.pop();
		for(int i=0;i<g[u].size();i++){
			
			if(!visit[g[u][i]])
			{
				stk.push(g[u][i]);
				visit[g[u][i]]=true;
			}
		}
	 } 	
 }
int main(){
	vector <int> d[5];
	bool visit[5];
	for(int i=0;i<5;i++){
		visit[i]=false;
	}
	kenarEkle(d,0,1);
	kenarEkle(d,0,2);
	kenarEkle(d,0,3);
	kenarEkle(d,1,4);
	kenarEkle(d,2,4);
	kenarEkle(d,3,4);
	///bfs 
	BFS(0,d,visit);
	for(int i=0;i<5;i++){
		visit[i]=false;
	}	
	cout<<endl;
	DFS(0,d,visit);
	return 0;
}
