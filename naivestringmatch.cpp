#include<bits/stdc++.h>
using namespace std;
void match(string s,string p){
	int m=s.length();
	int n=p.length();
	for(int i=0;i<m-n+1;i++){
		int j=0;
		if(s[i]==p[j]){
			int x=0;
		 for(int k=i;k<n+i;k++){
			 if(s[k]==p[j]){
				 x=1;
				 j++;
			 }
			 else{
				 x=0;
				break;
			 }
		 }
		 if(x==1){
			 cout<<i<<"\nyes";
			 cout<<"\n";
		 }
	 }
}
}

int main(){
	string s="lalalalal";
	string p="li";
	match(s,p);
	return 0;
}
