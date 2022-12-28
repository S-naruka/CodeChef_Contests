#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{int n,x=0,y=0;
	    cin>>n;
    int a[n],b[n];
    
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
	    
	for(int i=0;i<n;i++){
	    if(a[i]!=0&&b[i]!=0)
	        x++;
        
        else{
            y=max(x,y);
            x=0;}
	}   
	cout<<max(x,y)<<endl;   
	}
	return 0;
}
