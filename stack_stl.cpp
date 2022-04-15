#include<iostream>
using namespace std;
#include<stack>
int main(){
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif 

// creating stack

	  stack<int>s;

// push operation

	  s.push(2);
      s.push(4);
      s.push(5);


      // Pop operation

    // s.pop();


cout<<"Printing the topmost element is "<<s.top()<<endl;
   

if(s.empty()){
	cout<<"The stack is empty"<<endl;
}else{
	cout<<"The stack is not empty"<<endl;
}

    return 0;

}