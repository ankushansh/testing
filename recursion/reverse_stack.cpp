#include<bits/stdc++.h>
using namespace std;


void insert(stack<int>&s,int ele){

    if(s.size()==0){
        s.push(ele);
    return;
    }

    int temp=s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);
}
void printStack(stack<int>&s){
	while(!s.empty()){
      cout<<s.top()<<" ";
      s.pop();
    }
    cout<<"\n";
}
void reverse(stack<int>&s){

    if(s.size()==1){
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
}
int main(){
cout<<"Enter your number"<<" ";
    int n;
    cin>>n;
 stack<int>s;
 int val;
    for(int i=0;i<n;i++){
   cin>>val;
   s.push(val);
    }
reverse(s);
printStack(s);

}