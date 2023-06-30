#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    string s;
	    cin>>s;
	    if(s[0]=='0'){
	        cout<<'1';
	        x=x-1;
	        for(int i=1;i<n;i++){
	            cout<<s[i];
	        }
	        for(int i=1;i<=x;i++)
	            cout<<'0';
	        
	    }
	    else{
	        for(int i=0;i<n;i++){
	            cout<<s[i];
	        }
	        for(int i=1;i<=x;i++)
	            cout<<'0';
	        
	    }
	    cout<<endl;
	   
	   
	}
	return 0;
}
