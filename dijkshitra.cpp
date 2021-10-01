#include<bits/stdc++.h>
using namespace std;
#define INFINITY 9999

# define V 9
void dijkshitra(int graph[V][V]){
	int copy[V][V];
	for(int i=0;i<V;i++){
		for(int j=0;j<V;j++){
			if(graph[i][j]==0){
				copy[i][j]=INFINITY;
			}
			else{
				copy[i][j]=graph[i][j];
			}
		}
	}
	int dist[V];
    int p[V];
	int visited[V];
	for(int i=0;i<V;i++){
		dist[i]=copy[0][i];
		visited[i]=0;
	    p[i]=0;
	}
	dist[0]=0;
	visited[0]=1;
	int copyunt=1,next,min;
	while(copyunt<V-1){
		min=INFINITY;
		for(int i=0;i<V;i++){
			if(dist[i]<min && !visited[i]){
				min=dist[i];
				next=i;
			}
		}
			visited[next]=1;
			for(int i=0;i<V;i++){
				if(!visited[i]){
					if(min+copy[next][i]<dist[i])
					{
						dist[i]=min+copy[next][i];
						p[i]=next;
					}
				}
			}
			copyunt++;
	}
	int j=0;
	for(int i=0;i<V;i++)
		if(i!=0)
		{
			printf("\nDistance of node%d=%d",i,dist[i]);
			printf("\nPath=%d",i);
			j=i;
			do
			{
				j=p[j];
				printf("<-%d",j);
			}while(j!=0);
	}
}

int main(){
	int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
	                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
	                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
	                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
	                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
	                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
	                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
	                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
	                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
							dijkshitra(graph);
}
