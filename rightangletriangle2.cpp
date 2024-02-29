//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void triangle(int s){
       int i, j;
   for( i = 1; i <= s; i++ )
   {
      for( j = 1; j <= i; j++ )
      {
         if( i == 1 || i == s ) 
            cout << "*"<<" ";
        else if( j == 1 ) 
            cout << "*  ";
        else if(j == i )
            cout<<"*";
         else {
            cout << "  ";
         }
      }
      cout << endl;
   }
    }




//{ Driver Code Starts.
    
int main() {
    
    int t; cin>>t;
    
    while(t--){
        int s; cin>>s;
        triangle(s);
    }
}
// } Driver Code Ends