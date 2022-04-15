#include <bits/stdc++.h>

using namespace std;

void sort(int arr[],int n){

	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
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

int target;
cin>>target;

int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}
sort(arr,n);

// Now orignal approach of 2 pointers

int i=0;
int j=n-1;
int f=0;
while(i<j){

	if(arr[i]+arr[j]==target){
		cout<<"True";
		f=1;
		break;
	}
	else if(arr[i]+arr[j]>target){
		j--;
	}else{
		i++;
	}
}
if(f==0){
	cout<<false;
}
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";

}

// Our brute force approach
// bool flag=false;
// for(int i=0;i<n;i++){
// 	for(int j=i+1;j<n;j++){

// 		if(arr[i]+arr[j]==target){
// 			cout<<"true";
//             flag=true;
// 			break;
// 		}
// 	}
// }
// if(flag==false){
// 	cout<<"false";
// }

}