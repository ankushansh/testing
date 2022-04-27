#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int sum(int n){

    if(n==1){
        return 1;
    }
    int temp=sum(n-1);
    temp+=n;
    return temp;
}

int fibo(int n){
if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){

int g=fibo(4);
cout<<g<<endl;

int sumi=sum(3);
cout<<sumi<<endl;

int a=9;

if( a == 9){
    cout<<"NINE"<<endl;
}

 if( a > 0){
    cout<<"A IS POSITIVE"<<endl;
}
else{
    cout<<"A IS NEGATIVE"<<endl;
}

int n;
cin>>n;
int i=0;
while(i<n){
    int j=0;

    while(j<n){
        cout<<" ⭐ ";
        j++;
    }
    cout<<endl;
    i++;
}

}