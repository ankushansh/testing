#include<iostream>
#include<math.h>
using namespace std;

#define MAX 1000

int has[MAX+1][2];

bool search(int x){

	if(x>=0){
			if(has[x][0]==1){
			return true;
				}else{
				return false;
			}
		}else{
 x=abs(x);
			if(has[x][1]==1){
			return true;
				}else{
				return false;
			}
		}
}

void insert(int arr[],int n){

for(int i=0;i<n;i++){

	if(arr[i]>=0){
		has[arr[i]][0]=1;
	}else{
		
		has[abs(arr[i])][1]=1;
	}
}

}
int main(){

	 #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif 


int arr[]={-3,4,5,1,2,8};

int n=sizeof(arr)/sizeof(arr[0]);
insert(arr,n);

int find=-5;

 if(search(find)){
        cout<<"Element is present"<<endl;
    }else{
        cout<<"Element is not present "<<endl;
    }
}