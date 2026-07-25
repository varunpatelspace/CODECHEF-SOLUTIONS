/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CRDGAME3                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 25, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/CRDGAME3                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
   int t,pc,pr; // your code goes here
   cin>>t;
   while(t--){
       cin>>pc >>pr;
       
        int chef = (pc + 8) / 9;
        int rick = (pr + 8) / 9;

        if (chef < rick) {
            cout << 0 << " " << chef << "\n";
        } else {
            cout << 1 << " " << rick << "\n";
        }
       
   }
   return 0;
   
}
