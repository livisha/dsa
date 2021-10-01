#include<iostream>
using namespace std;
int jobsequence(int p[],int d[],int n,int max){
  int k=max;
  int x[k-1];
  int tp=0;
  int w=0;
  for(int g=0;g<k;g++){
      x[g]=0;
  }
  for(int i=0;i<k;i++){

    if(d[i]<=k && x[(d[i]-1)]==0){
      x[(d[i]-1)]=1;
      tp=tp+p[i];
      cout<<p[i]<<"\n";
  }

    if(d[i]<=k && x[(d[i]-1)]==1){
      for(int j=(d[i]-2);j<=0;j--){
         if(x[j]==0){
           x[j]=1;
           tp=tp+p[i];
           cout<<p[i]<<"\n";
           break;
         }
       }
    }
    for(int l=0;l<=k;l++){
      if(x[i]==0){
          w=1;
      }
  }
  if(w!=1){
      return tp;
  }
  }
return tp;
}
int main(){
  int n,m=0;
  cout<<"enter the number of jobs\n";
  cin>>n;
  int p[n],d[n],temp,max=0;
  for(int i=0;i<n;i++){
    cout<<"enter the profit and deadlines"<<i<<" ";
    cin>>p[i]>>d[i];
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
      if(p[i]>p[j]){
        temp=p[i];
        p[i]=p[j];
        p[j]=temp;

        temp=d[i];
        d[i]=d[j];
        d[j]=temp;
        }
    }

  }
  for(int i=0;i<n;i++){
    if(max<d[i]){
      max=d[i];
    }
  }
  cout<<"max is"<<max;
  for(int i=0;i<n;i++){
    cout<<"\n"<<p[i]<<" "<<d[i];
  }
  m=jobsequence(p,d,n,max);
  cout<<"maximum"<<m;
  return 0;
}
