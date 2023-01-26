#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x=0;
	    cin>>n;
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++){
	        if(b[i]==0){
	            x++;
	        }
	    }
	    if(x%2!=0)
	        cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	   
	}
	return 0;
}
