/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : RRCOPY                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 1, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/RRCOPY                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        set<int> s;

        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }

        cout << s.size() << "\n";
    }

    return 0;
}
