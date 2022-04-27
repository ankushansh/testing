#include<bits/stdc++.h>
#include<stack>
using namespace std;
void printStack(stack<int> s){
	while(!s.empty()){
      cout<<s.top()<<" ";
      s.pop();
    }
    cout<<"\n";
}
void solve(stack<int> &s,int k){


 if(k==1){
     s.pop();
     return;
 }
    int temp=s.top();
    s.pop();

    solve(s,k-1);
    s.push(temp);
}
 void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        
        if(s.size()<=0){
            return ;
        }
        int middle=(sizeOfStack/2)+1;
        
        solve(s,middle);
    return;
        
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

    deleteMid(s,n);

  
printStack(s);
// cout<<s.size();
return 0;
}