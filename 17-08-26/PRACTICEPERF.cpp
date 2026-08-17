/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PRACTICEPERF                                                ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 17, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/PRACTICEPERF              ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
        int count = 0;

        for (int i = 0; i < 4; i++) {
            int p;
            cin >> p;

            if (p >= 10) {
                count++;
            }
        }
        cout << count << endl;

    return 0;
}