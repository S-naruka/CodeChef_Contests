#include <iostream>
using namespace std;

int fun(int n)
{
    if (n % 2 == 0)
        return 2;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0){
            return i;
            break;
        }
    }
 
    return n;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,count=0,sol;
	    cin>>x>>y;
	    x=x+fun(x);
        sol=(y-x)/2;
        if((y-x)%2!=0)
        {
            sol++;
        }
        cout<<sol+1<<endl;
    }
	    
	    
	   
	
	
	return 0;
}
