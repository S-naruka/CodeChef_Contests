#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,max=0,flag=false;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	 
	    int b=*max_element(a,a+n);
	    for(int i=0;i<n;i++){
	        if(a[i]==b){
	            max++;
	        }
	    }
	    map<int,int>m;
	    for(int i=0;i<n;i++){
	        m[a[i]]++;
	    }
	    
	    
	    
	    for(auto it=m.rbegin();it!=m.rend();it++){
	        if(it->second%2!=0){
	            cout<<"Marichka"<<endl;
	            flag=true;
	            break;
	        }
	    }
	    if(!flag)
	        cout<<"Zenyk"<<endl;
	    
	    
	   
	   
	}
	return 0;
}
