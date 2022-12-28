#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
        cin>>t;
    while (t--){
        int n;
        cin>>n;
        map<int,int> map;
        bool flag=true;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            map[x]++;
        }
        for(auto y:map){
            if(y.second%2!=0){
                flag=false;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
   

    return 0;
}
