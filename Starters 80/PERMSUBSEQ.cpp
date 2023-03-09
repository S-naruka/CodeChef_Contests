#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,a=0,b=1000000007,c=0,d=1;
	    cin>>n;
	    map<int,int>m;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        m[x]++;
	    }
	    for(int i=1;i<=n;i++){
	        long long temp=d*m[i];
	        temp=temp%b;
	        a=a+temp;
	        d=temp;
	        a=a%b;
	    }
	   
	   cout<<a<<endl;
	}
	return 0;
}
