#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ int n,counta=0,countb=0;
	    cin>>n;
	  string a,b;
	    cin>>a;
	    cin>>b;
	   
	  for(int i=0;i<n;i++){
	       if(a[i]=='1'){
	           counta++;
	       }
	        
	    } 
	  for(int i=0;i<n;i++){
	        if(b[i]=='1'){
	           countb++;
	       }
	    }
	    
	   if(counta!=countb){
	       cout<<"NO"<<endl;
	   }
	   
	   else
	     cout<<"YES"<<endl;
	}
	return 0;
}
