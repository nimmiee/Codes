

#include <bits/stdc++.h>
using namespace std;



void triangleWall(int s){
    
    //Write your code here
    for(int i = 1; i<=s; i++){
        for(int j = 1; j<=i; j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
}
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        triangleWall(s);
	}
}
