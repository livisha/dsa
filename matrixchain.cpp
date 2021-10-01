#include <iostream>
using namespace std;

int main()
{
    int n=5;
 int p[]={2,2,4,2,6};
 int m[5][5]={0};
 int s[5][5]={0};
 int j,min,q,i;
 for(int d=1;d<n-1;d++){
     for(i=1;i<n-d;i++){
         j=i+d;
         min=32767;
         for(int k=i;k<j-1;k++){
             q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
             if(q<min){
                  m[i][j]=q;
                 s[i][j]=k;
             }

         }

         }
}
  cout<<m[i][n-1];

    return 0;
}
