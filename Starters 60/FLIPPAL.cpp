#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ int n,c1=0,c0=0;
	    cin>>n;  
	  char s[n];
	    cin>>s;
	    
	  for(int i=0;i<n;i++){
	    if(s[i]=='1')
	        c1++;
	    else
	        c0++;
	  }      
	  
	  if(c1%2!=0&&c0%2!=0)
	    cout<<"NO"<<endl;
	  
	  else
	    cout<<"YES"<<endl;
	   
	}
	return 0;
}
