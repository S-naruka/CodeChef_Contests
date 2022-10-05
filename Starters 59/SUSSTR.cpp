#include <iostream>
using namespace std;
int main() {
	int t;
        cin>>t;
	while(t--){ 
	    
	int n;
        cin>>n;
    string s;
        cin>>s;
    string a;
    int i=0,j=n-1;
    
    while(i<=j){
        if(s[i]=='0')
            a=s[i]+a;
        else
            a=a+s[i];
        if(i<j){
            if(s[j]=='0'){
                a=a+s[j];
            }
            else a=s[j]+a;
        j--;
        }
        i++;
    }
    cout<<a<<"\n";
	}
	return 0;
}
