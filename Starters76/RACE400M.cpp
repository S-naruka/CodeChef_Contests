#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
        cin>>x>>y>>z;
	    if(x<y&&x<z)
	        cout<<"ALICE"<<endl;
        else if(y<z&&y<x)
	        cout<<"BOB"<<endl;
	    else if(z<y&&z<x)
	        cout<<"CHARLIE"<<endl;    
	    
	   
	   
	}
	return 0;
}
