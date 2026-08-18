/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MOOCHEF                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 18, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/MOOCHEF                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        int hap = 0;
        int maxHap = 0;
        int minHap = 0;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a >= l && a <= r) {
                hap++;
            } 
            else {
                hap--;
            }
