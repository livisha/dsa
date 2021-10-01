#include <bits/stdc++.h>
#include<time.h>
using namespace std;
void get_pairs_count(int arr[],int n,int sum)
{
  int check=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<"("<<arr[i]<<","<<arr[j]<<")";
                check=1;
            }
        }
    }
    if(check==0){
      cout<<"no pair found";
    }
}
int main()
{
    int n;
	int arr[1000];
    int sum;
    cout<<"Enter number of elements::";
    cin>>n;
	srand(time(0));

    for(int i=0;i<n;i++){
      arr[i]=rand()%100;
    }
    cout<<"\nElements of the array::"<<endl;
    for(int i=0;i<n;i++){
      cout<<"Elements no "<<i+1<<"::"<<arr[i]<<endl;
    }
    cout<<"Enter the required Sum::";
    cin>>sum;
    get_pairs_count(arr, n, sum);
    return 0;
}
