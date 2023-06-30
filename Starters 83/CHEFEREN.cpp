#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    if(n%2==0){
	        cout<<((n/2)*a)+((n/2)*b)<<endl;
	    }
	    else
	        cout<<((n/2)*a)+(((n/2)+1)*b)<<endl;
	    
	   
	   
	}
	return 0;
}
