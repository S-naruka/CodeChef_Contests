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
	    if(n%2==0){
	    for(int i=0;i<n;i++){
	        if(i%2==0)
	            a[i]=i+2;
            else
                a[i]=i;
	    }
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	    }
	    else
	        cout<<-1<<endl;
	   
	   
	}
	return 0;
}
