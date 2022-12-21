#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{   int x;
	        cin>>x;
	        
	    if(x<4)
	        cout<<"MILD"<<endl;
        
	   else if(x>=4&&x<7)
	        cout<<"MEDIUM"<<endl;
	        
	   else 
	        cout<<"HOT"<<endl;
	   
	}
	return 0;
}
