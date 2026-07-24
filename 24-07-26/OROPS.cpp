/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : OROPS                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 24, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/OROPS                     ║
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
        int N;
        cin >> N;

        vector<int> A(N);

        int G = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            G |= A[i];
        }

        int cur = 0;
        int segments = 0;

        for (int x : A) {