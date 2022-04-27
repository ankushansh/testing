#include<iostream>
using namespace std;

        int fact(int n){
           
           if(n==1){

               return n;
           }

                n= n*fact(n-1);
            }
int main(){
int n;
cout<<"Enter you number ";
cin>>n;
int multi =fact(n);
cout<<multi;


}