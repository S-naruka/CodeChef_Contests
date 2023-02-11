#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    a[0]=2;
	    for(int i=1;i<n;i++){
	        
	        a[i]=2+i;
	    }
	    a[n-1]=1;
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	   
	   
	}
	return 0;
}
