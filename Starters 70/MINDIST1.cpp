#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{ int n,dis=0,flag=0;
	    cin>>n;
	  string s;
	    cin>>s;
	  
	 
	  
	  
	  for(int i=0;i<n;i++){
	      if(s[i]=='1'){
	          for(int j=i+1;j<n;j++){
	              if(s[i]==s[j]){
	                
	                if((j-i)%2==0){
	                    dis=2;
	                    break;
	                }
	               
	                  else{
	                      dis=1;
	                      flag=1;
	                      break;
	                  }
	               }
	          }
	      }
	      
	  }  
	  if(flag==0){
	  cout<<dis<<endl;  
	  }
	  else
	  cout<<flag<<endl;
	}
	return 0;
}
