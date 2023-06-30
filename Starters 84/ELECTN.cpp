#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,count=0;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[i]>=x){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	    
	   
	   
	}
	return 0;
}
