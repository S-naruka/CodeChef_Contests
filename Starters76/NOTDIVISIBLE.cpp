#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n]={0};
	    for(int i=0;i<=(n/2);i++){
	        if(2*i==n)
	            break;
            else
                a[2*i]=1;
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	   
	   
	}
	return 0;
}
