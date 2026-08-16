/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : P4HOME                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 16, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/P4HOME                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x >>y >>z;
        cout << 2 * min(y, z) << '\n'; 
}
return 0;
}
