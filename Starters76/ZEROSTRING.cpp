#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c1=0,c0=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            c1++;
	        }
	        else{
	            c0++;
	        }	            
	    }
	    if(c0==0){
	        cout<<1<<endl;
	    }
	    else if(c1==0){
	        cout<<0<<endl;
	    }
	    else if(c0>=c1){
	        cout<<c1<<endl;
	    }
	    else
	        cout<<c0+1<<endl;
	   
	   
	}
	return 0;
}
