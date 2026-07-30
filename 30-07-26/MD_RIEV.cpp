/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MD_RIEV                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 30, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/MD_RIEV?tab=statement     ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;    // your code goes here
    cin>>t;
    while(t--){
        cin>>n;
        if(n <= 4){
        cout<<"0"<<" "<<n <<endl;
        } else{
        cout<<"1"<<" "<<n-1<<endl;
        }
    }
    
    }
