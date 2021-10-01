#include<bits/stdc++.h>
using namespace std;
void computelps(string pat,int n,int lps[]){
	int len=0;
	int i=1;
	while(i<n){
		if(pat[i]==pat[len]){
			lps[i]=len+1;
			len++;
			i++;
		}
		else{
			if(len!=0){
				len=lps[len-1];
			}
			else{
				lps[i]=0;
				i++;
			}
		}
	}
}
void kmp(string txt,string pat){
	int m=txt.length();
	int n=pat.length();
	int lps[n];
	memset(lps,0,sizeof(lps));
	computelps(pat,n,lps);
	int i=0;
	int j=0;
	while(i<m-n+1){
		if(txt[i]==pat[j]){
			i++;
			j++;
		}
		else{
			if(j!=0){
				j=lps[j-1];
			}
			else{
				i++;
			}
		}
		if(j==n){
			cout<<i-j<<" ";
			j=lps[j-1];
		}
	}

}
int main(){
	string txt="hellollo";
	string pat="ll";
	kmp(txt,pat);
}
