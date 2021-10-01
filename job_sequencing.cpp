#include<iostream>
using namespace std;
void jobsequence(int p[],int d[],int n,int max){
  int k=max;
  int x[k-1]={0};
  int tp=0;
  for(int i=0;i<k;i++){
    if(x[d[i]]==0){
      x[d[i]]=1;
      tp=tp+p[i];
      cout<<p[i]<<"\n";
  }

    if(x[d[i]]==1){
      for(int j=d[i-1];j<=0;j--){
         if(x[j]==0){
           x[d[j]]=1;
           tp=tp+p[i];
           cout<<p[i]<<"\n";
           break;
         }
       }
    }
  }
 cout<<"\nthe nMaximum profit is:="<<tp<<"\n";
 // for(int i=0;i<k;i++){
 //   cout<<x[i]<<" ";
 // }
}
int main(){
  int n;
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
  jobsequence(p,d,n,max);
  return 0;
}
