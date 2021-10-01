#include<stdio.h>
struct pair{
  int min;
  int max;
};

struct pair getminmax(int a[],int l,int h){
  struct pair minmax,mm1,mmr;
  int mid;
  if(l==h){
    minmax.min=a[l];
    minmax.max=a[h];
    return minmax;
  }
  if(h==l+1){
    if(a[l]>a[h]){
      minmax.min=a[h];
      minmax.max=a[l];
    }
    else{
      minmax.min=a[l];
      minmax.max=a[h];
    }
    return minmax;
  }
  mid=(h+l)/2;
  mm1=getminmax(a,l,mid);
  mmr=getminmax(a,mid+1,h);

  if (mm1.min<mmr.min)
    minmax.min=mm1.min;
  else
    minmax.min=mmr.min;

  if (mm1.max>mmr.max)
    minmax.max=mm1.max;
  else
    minmax.max=mmr.max;

  return minmax;
}


struct pair *minmax,mm1,mmr;
void main(){
  int arr[]={13,67,21,5,34};
  struct pair minmax=getminmax(arr,0,4);
  printf("minimum element is %d",minmax.min);
  printf("maximum element is %d",minmax.max);
}
