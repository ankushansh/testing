#include <bits/stdc++.h>

using namespace std;

void swap(int arr[],int  start,int end){
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;

}
 int partition(int arr[],int l,int r){

 	int pivot=arr[r];
 	int i=l-1;

 	for(int j=l;j<r;j++){
 		if(arr[j]<pivot){
 			i++;
 			swap(arr,i,j);
 		}
 	}
 	swap(arr,i+1,r);
 	return i+1;
 }   

void quicksort(int arr[], int l , int r){

	if(l<r){
		int pi=partition(arr,l,r);
				quicksort( arr,l ,pi-1);
				quicksort( arr,pi+1,r);

	}
}

int main(){
	
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif 

int arr[]={5,4,3,2,1};
int n=5;
quicksort(arr,0,4);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

}