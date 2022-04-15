#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(){

	#ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif 


      unordered_set<int> s;

      s.insert(20);
         s.insert(10);
            s.insert(5);
               s.insert(4);
                  s.insert(3);


  cout<<"The size of whole element is "<<s.size();
  
}