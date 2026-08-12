/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : BUSROW                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/START251D/problems/BUSROW          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m,x; // your code goes here
    cin>>t; 
while(t--){
    cin>>n >>m >>x;
    int row = (x-1)/m+1;
    int front = row;
    int back = n- row + 1;
    cout<<min(front,back)<<endl;
    
}
return 0;
}
