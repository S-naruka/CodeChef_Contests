#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin >> s;
        int c1=1,c0=0;
        int ans;
        char x='1',y='0';
        for(int i=1;i<n;i++){
            if(x!=s[i-1]){
                x='1';
                c1++;
            }
            else
                x='0';
        }
        for(int i=1;i<n;i++){
            if(y!=s[i-1]){
                y='1';
                c0++;
            }
            else
                y='0';
        }   
        ans=max(c0,c1);
        
        
        
        
        
        cout << ans-1+1 << endl;
    }
    return 0;
}
