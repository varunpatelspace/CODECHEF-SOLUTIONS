/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ALEXNUMB                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 31, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/ALEXNUMB                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long n;
        cin >> n;

        long long x;
        for (int i = 0; i < n; i++)
            cin >> x;   // sirf input read karna hai

        cout << n * (n - 1) / 2 << "\n";
    }

    return 0;
}