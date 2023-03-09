#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        if((2*a[i])>=b[i]&&(2*b[i])>=a[i])
	            c++;
	    }
	    cout<<c<<endl;
	    
	   
	   
	}
	return 0;
}
