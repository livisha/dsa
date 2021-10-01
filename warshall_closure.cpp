#include<bits/stdc++.h>
using namespace std;


int transitiveClosure(int graph[v][v]){
  int reach[v][v],i,j,k;
  for(i=0;i<v;i++){
    for(j=0;j<v;j++){
      reach[i][j]=graph[i][j];
    }
  }

  for(k=0;i<v;k++){
    for(j=0j<v;j++){
      for(i=0;i<v;i++){
        reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]);
      }
    }
  }
}
int main(){
  int v;
  int graph[v][v]={{1, 1, 0, 1},
                   {0, 1, 1, 0},
                   {0, 0, 1, 1},
                   {0, 0, 0, 1} }
   transitiveClosure(graph);
}
