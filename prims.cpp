#include<stdio.h>
#include<limits.h>
#include<iostream>
using namespace std;
int array_parent[5];
int key[5];
bool MST[5];

int min(int key[],bool MST[]){
  int m=INT_MAX;
  int n;
  for(int i=0;i<5;i++){
    if(MST[i]==false && key[i]<m){
      m=key[i];
      n=i;
    }
  }
  return n;
}
void printMST(int array_parent[], int adj[5][5])
{
    cout<<"Edge \tWeight\n";
    for (int i = 1; i < 5; i++)
        cout<<array_parent[i]<<" - "<<i<<" \t"<<adj[i][array_parent[i]]<<" \n";
}
void prim(int adj[5][5]){

  for(int i=0;i<5;i++){
    key[i]=INT_MAX;
    MST[i]=false;
  }
  key[0]=0;
  array_parent[0]=-1;
  for(int i=0;i<4;i++){
    int u=min(key,MST);
    MST[u]=true;
    for(int j=0;j<5;j++){
      if(adj[u][j] && MST[j]==false && key[j]>adj[u][j]){
        array_parent[j]=u;
        key[j]=adj[u][j];
    }
    }
  }
  printMST(array_parent, adj);
}


int main(){
int adj[5][5]={{0,2,0,6,0},
              {2,0,3,8,5},
              {0,3,0,0,7},
              {6,8,0,0,9},
              {0,5,7,9,0}};
prim(adj);

}
