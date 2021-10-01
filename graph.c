#include<stdio.h>
#include<stdlib.h>
#define max 10
int adj[max][max];
int main(){
  int o,i,j ,d,edges,graph;
  printf("undirected  or  1 for directed\n");
  scanf("%d",&graph);
  if(graph==1){
    edges=max*(max-1)/2;
  }
  else{
    edges=max*(max-1);
  }
  for(i=0;i<edges;i++){
    printf("enter the values ");
    scanf("%d%d",&o,&d);
    if((o==-1) && (d==-1)){
      break;
    }
    if(o>9 || d>9 || o<0 || d<0){
      printf("invalid\n");
    }
    else{
      adj[o][d]=1;
      if(graph>1){
        adj[d][o]=1;
      }
    }
  }
  printf("the matrix is:\n");
  for(i=0;i<max;i++){
    for(j=0;j<max;j++){
      printf("%5d",adj[i][j]);
    }
    printf("\n");
  }
  return 0;
}
