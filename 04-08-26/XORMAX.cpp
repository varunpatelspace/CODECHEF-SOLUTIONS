/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : XORMAX                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 4, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/XORMAX                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string A, B;
        cin >> A >> B;

        int n = A.size();

        int a1 = count(A.begin(), A.end(), '1');
        int b1 = count(B.begin(), B.end(), '1');

        int a0 = n - a1;
        int b0 = n - b1;

        int ones = min(a1, b0) + min(a0, b1);

        cout << string(ones, '1') << string(n - ones, '0') << "\n";
    }
}