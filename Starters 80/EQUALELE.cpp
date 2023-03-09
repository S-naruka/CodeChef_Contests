#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    int a[n],b[n]={0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    
	    
	    sort(a, a+ n);
 
    
    for (int i = 0; i < n; i++){
        c = 1;

       
        while (i < n - 1 && a[i] == a[i + 1]){
            i++;
            c++;
        }
        b[i]=c;	    
    }
	cout << n-*max_element(b, b + n) << "\n";   
	   
	}
	return 0;
}
