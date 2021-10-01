#include<bits/stdc++.h>
using namespace std;

bool isfactor(int i,int n){
	for(int j=1;j<=10;j++){
		if(j*i==n){
			return true;
		}
	}
	return false;
}
bool isprime(int n){
for(int i=2;i<=n/2;i++){
	if(n%i==0){
		return false;
	}
}
return true;
}
int prime(int n){
	for(int i=n;i>=1;i--){
		if(isprime(i)){
			if(isfactor(i,n)){
				return i;
			}
		}
	}
}
void findfactor(vector<int>v){
	int k;
	vector<int>res;
	for(int i=0;i<v.size();i++){
		k=prime(v[i]);
		res.push_back(k);
	}

	for(int i=0;i<res.size();i++){
		cout<<res[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<=8;i++){
		v.push_back(n+i);
	}
	findfactor(v);
}
