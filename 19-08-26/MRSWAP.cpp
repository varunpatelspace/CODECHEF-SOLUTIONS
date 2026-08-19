/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MRSWAP                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 19, 2026                                             ║
 ║  URL      : https://www.codechef.com/START252D/problems/MRSWAP          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[2 * n + 1];
        for (int i = 1; i <= 2 * n; i++) {
            cin >> a[i];
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            ans += max(a[i], a[2 * n + 1 - i]);
        }

        cout << ans << endl;
    }

    return 0;
}