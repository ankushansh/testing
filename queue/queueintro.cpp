#include<iostream>
#include<queue>
using namespace std;


int main(){


    queue<int> q;

    q.push(2);
    cout<<"front of queue is "<<q.front()<<endl;
    q.push(4);
    cout<<"front of queue is "<<q.front()<<endl;
    q.push(3);
    cout<<"front of queue is "<<q.front()<<endl;

    cout<<"The size of queue is "<<q.size()<<endl;
    
    
    q.pop();
    q.pop();
    q.pop();
        cout<<"The size of queue is "<<q.size()<<endl;


if(q.empty()){
    cout<<"Queue is empty";
}else{
    cout<<"Queue is not empty";
}
    return 0;
}




