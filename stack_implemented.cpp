#include<iostream>
#include<stack>
using namespace std;


class Stack {
// properties
public:
	int * arr;
	int top;
	int size;



// behaviour

Stack(int size){
	this->size=size;
	arr=new int [size];
	top=-1;
}

void push(int ele){

	if(size-top>1){
		top++;
		arr[top]=ele;
	}else{
		cout<<"Your stack is full kindly pop some elements"<<endl;
	}
}

void pop(){
	if(top>=0){
		top--;
	}else{
		cout<<"Stack underflow";
	}
};

int peek(){
	if(top>=0){
		return arr[top];
	}else{
		cout<<"The stack is empty";
		return-1;
	}
}

bool isempty(){

	if (top<0)
	{
	return true;
	}else{
return false;
	}
}



};
int main(){
	#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif 
Stack st(5);

st.push(12);
st.push(20);
st.push(21);
st.push(20);
st.push(20);
st.push(20);


cout<<st.peek()<<endl;

st.pop();

cout<<st.peek()<<endl;


if(st.isempty()){
	cout<<"Stack is empty";
}else{
	cout<<"Stack is not empty";
}
};
