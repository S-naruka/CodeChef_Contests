#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if(10*x>=y)
	        cout<<y*z<<endl;
        else
            cout<<(10*x)*z<<endl;
	    
	   
	   
	}
	return 0;
}
