#include <iostream>
using namespace std;
int f(int,int,int);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,n=1,c;
        cin>>x>>y;
        c=f(n,x,y);
                
        
        cout<<c<<endl;
	    
	   
	   
	}
	return 0;
}

int f(int n,int x,int y){
    if((x+n)%y==0&&(y+n)%x==0){
    return n;
    
    }        
            else
                return f(n+1,x,y);
}
