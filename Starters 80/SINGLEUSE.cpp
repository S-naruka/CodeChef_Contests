#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int h,x,y,c=0;
	    cin>>h>>x>>y;
	    h=h-y;
	    c=1;
	    while(h>0){
	        h=h-x;
	        c++;
	    }
	    cout<<c<<endl;
	   
	   
	}
	return 0;
}
