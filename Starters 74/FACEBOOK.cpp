#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    int a[n],b[n];
	    
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++){
	        if(a[c]<a[i]){
	            c=i;
	        }
	        else if(a[c]==a[i]){
	            if(b[i]>b[c]){
	                c=i;
	            }
	        }
	    }
	   
	   cout<<c+1<<endl;
	}
	return 0;
}
