#include <bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif 
	int n=4;
	int arr[n]={1,2,3,4};

	int pre[n+1];
	pre[0]=0;

	for(int i=1;i<=n;i++){

		pre[i]=pre[i-1]+arr[i-1];
	}

	for(int i=0;i<=n;i++){
		cout<<pre[i]<<" ";
	}

	cout<<endl;
int i=1;
int j=2;
	cout<<pre[j+1]-pre[i];
}