#include <bits/stdc++.h>

using namespace std;

void sort(int arr[],int n){

	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]<arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
		counter++;
	}
	
}
int main(){
#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif 
int n;
cin>>n;

// int target;
// cin>>target;

int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}
// sort(arr,n);

sort(arr,arr+n);
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

}
