#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,count=0;
	    cin>>a>>b>>c>>d;
	    int low=min(a,c);
        int high=max(b,d);
        unordered_set <int> x;
            for(int i=a;i<=b;i++){
                x.insert(i);
            }
            for(int i=c;i<=d;i++){
                x.insert(i);
            }
            cout<<x.size()<<endl;
    }
     
	return 0;
}
