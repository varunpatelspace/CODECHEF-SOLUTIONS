/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHKEV                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/START251D/problems/CHKEV           ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int l,r;  // your code goes here
   cin>>l>>r;
   if((l + r) % 2 == 0) {
    cout << "Yes";
} else {
    cout << "No";
}

}
