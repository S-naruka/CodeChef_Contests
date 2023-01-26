#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            count++;
	        }
	    }
	    if(n<=2&&count<2)
	        cout<<"NO"<<endl;
	    else if(count>3)
	        cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
	   
	   
	}
	return 0;
}
