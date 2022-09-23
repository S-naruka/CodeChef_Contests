#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int  n,x,y;
      cin>>n>>x;
	    y=n-x;
    
	    if(x==0||x==n)
	        cout<<"0"<<endl;
	
	    else if(x<=y)
	        cout<<x<<endl;
	
	    else
        	cout<<y<<endl;
	}
	return 0;
}
