#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	
	while(t--){
	   int x,n;
	    cin>>n;
	   map <int,int> m;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        m[x]++;}
	   std::map<int, int>::iterator itr;
	    x=m.begin()->second;
	   
	   for (itr = m.begin(); itr != m.end(); ++itr){
            if(x<itr->second){
            x=itr->second;}
        
	       
	   }
        cout<<n-x<<endl;
	}
	
	return 0;
}
