#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ 
	    int n,x,c=0;
	        cin>>n>>x;
	    int a[n],b[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	   
        for(int i=0;i<n;i++){
	        if(a[i]>=x){
	            c=c+b[i];
	        }
            
        }
        
        
	    
	    cout<<c<<endl;
	    c=0;
	}
	return 0;
}
