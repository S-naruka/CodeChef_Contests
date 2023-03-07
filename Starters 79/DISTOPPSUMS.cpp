#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,e=0,o=0;
	    cin>>n;
	    int a[n];
	    for(int i=1;i<=n;i++){
            if(i%2==0){
                a[(n/2)+e]=i;
                e++;
            }
            else{
                a[(n/2)-o-1]=i;
                o++;
            }
   
        }   
	    
	   for(int i=0;i<n;i++){
	       cout<<a[i]<<" ";
	   }
	   cout<<endl;
	}
	return 0;
}

