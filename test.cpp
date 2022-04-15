#include <bits/stdc++.h>

using namespace std;


int main(){
#ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	  #endif 


	  vector<int> res={-1,0,1,2,-1,-4};

sort(res.begin(),res.end());
for(int i=0;i<res.size()-2;i++){
	cout<<res[i]<<" ";
}
cout<<endl;
cout<<res.size()<<endl;
cout<<res.size()-1<<endl;
 cout<<res.size()-2<<endl;
	}