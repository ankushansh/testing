#include<bits/stdc++.h>
using namespace std;
void insert(vector<int> &b , int temp){
    if(b.size()==0 || b[b.size()-1]<=temp){
        b.push_back(temp);
        return;
    }

    int val=b[b.size()-1];
    b.pop_back();
    insert(b,temp);
    b.push_back(val);
    return;
}

void sort(vector<int> &v){

if(v.size()==0){
    return;
}
int temp=v[v.size()-1];  //last element
// cout<<temp<<"-";
v.pop_back(); 
sort(v);
insert(v,temp);
}
int main(){
// our vector
vector<int> vec;

// our size
cout<<"Enter your size:";
int n;
cin>>n;

// our value
int val;
// inserting values

for(int i=0;i<n;i++){
cin>>val;
vec.push_back(val);
}
// our inserted value

sort(vec);

for(int i=0;i<n;i++){
    cout<<vec[i]<<" ";
}
}
