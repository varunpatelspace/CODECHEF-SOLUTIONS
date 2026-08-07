/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : OJUMPS                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 7, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/OJUMPS                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    if(t%6==0 || t%6==1 || t%6 == 3){
        cout<<"yes";
    } else{
        cout<<"no";
    }
    return 0;
}
