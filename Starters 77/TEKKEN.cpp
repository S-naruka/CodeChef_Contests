#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(x>y&&x>z){
	        cout<<"YES"<<endl;
	    }
	    else if(y>=z&&(y-z)>=x)
	        cout<<"NO"<<endl;
	    else if(z>=y&&(z-y)>=x)
	        cout<<"NO"<<endl;    
	    else
	        cout<<"YES"<<endl;
	    
	   
	   
	}
	return 0;
}
