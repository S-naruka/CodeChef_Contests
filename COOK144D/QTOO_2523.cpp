#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,flag=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<n;j++){
	            if(i==j){
	                continue;
	            }
	            else{
	                if(s[i]==s[j]){
	                    flag=1;
	                    break;
	                }
	            }
	        }
	    }
	    if(flag==1){
	        cout<<n-2<<endl;
	    }
	    else
	        cout<<-1<<endl;
	   
	   
	}
	return 0;
}
