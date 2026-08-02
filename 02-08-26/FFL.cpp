/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FFL                                                         ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 2, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/FFL                       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, S;
        cin >> N >> S;

        vector<int> price(N), type(N);

        for (int i = 0; i < N; i++)
            cin >> price[i];

        int minDef = INT_MAX;
        int minFor = INT_MAX;

        for (int i = 0; i < N; i++) {
            cin >> type[i];

            if (type[i] == 0)
                minDef = min(minDef, price[i]);
            else
                minFor = min(minFor, price[i]);