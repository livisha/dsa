#include<stdio.h>
#include<conio.h>
void knapsack(int u,float num,float profit[],float weight[]){
  float x[20],tp=0;
  int i=0;
  for(int i=0;i<num;i++){
  x[i]=0.0;
  }

  for(int i=0;i<num;i++){
    if(weight[i]>u){
      break;
    }
    else{
      x[i]=1.0;
      tp=tp+profit[i];
      u=u-weight[i];
    }
  }
  if(i<num){
    x[i]=u/weight[i];
  }
  tp=tp+(x[i]*profit[i]);

  for (i=0;i<num;i++)
 {
      printf("%f\t",x[i]);
 }
  printf("\nMaximum profit is = %f", tp);
}


void main(){
  float profit[20],weight[20],ratio[20],temp,u;
  int num;

  printf("enter the no of object\n");
  scanf("%d",&num);
  printf("\nenter the weight and profit");
  for (int i=0;i<num;i++){
    scanf("%f %f", &weight[i], &profit[i]);
 }
printf("enter the capacity\n");
scanf("%f",&u);
for(int i=0;i<num;i++){
  ratio[i]=profit[i]/weight[i];
}


for(int i=0;i<num;i++){
  for(int j=i+1;j<num;j++){
    if(ratio[i]<ratio[j]){
      temp=ratio[j];
      ratio[j]=ratio[i];
      ratio[i]=temp;
      temp=weight[j];
      weight[j]=weight[i];
      weight[i]=temp;
      temp=profit[j];
    profit[j]=profit[i];
    profit[i]=temp;
    }
  }
}
knapsack(u,num,profit,weight);
}
