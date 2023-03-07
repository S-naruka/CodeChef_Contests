#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    float x,y;
	    cin>>x>>y;
	    if((100-x)<(200-(2*y)))
	        cout<<"First"<<endl;
        else if((100-x)>(200-(2*y)))
	        cout<<"Second"<<endl;
        else if((100-x)==(200-(2*y)))
	        cout<<"Both"<<endl;
	    
	   
	   
	}
	return 0;
}
