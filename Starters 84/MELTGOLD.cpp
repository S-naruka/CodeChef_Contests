#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,time_=0;
	    cin>>x>>y;
	    for(int i=1;i>0;i++){
	        if(y>=x){
	            
	            break;
	        }
	        y=i+y;
	        time_++;
	    }
	    cout<<time_<<endl;
	   
	   
	}
	return 0;
}
