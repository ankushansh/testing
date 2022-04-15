#include <bits/stdc++.h>

using namespace std;

int binerySearch(int arr[],int size,int key){

	int start=0;
	int end=size-1;

	int mid=(start+end)/2;

     while(start<=end){

     if(arr[mid]==key){
		return mid;
	}
	else if(arr[mid]<key){
      start=mid+1;
	}
	else{
		end=mid-1;
	}

	mid=(start+end)/2;

     }
     return-1;
}

int main(){

#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif 



int even[6]={2,4,6,8,12,14};

int index=binerySearch(even,6,12);

cout<<"The index of 12 is "<<index<<endl;
int odd[5]={1,3,5,7,9};


int index1=binerySearch(odd,6,5);

cout<<"The index of 5 is "<<index1<<endl;
	  




}