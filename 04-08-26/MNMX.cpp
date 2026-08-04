/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MNMX                                                        ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 4, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/MNMX                      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

                pos = i;
        }

        long long ans = 0;

        // Left side
        int mn = a[pos];
        for (int i = pos - 1; i >= 0; i--) {
            ans += mn;
            mn = min(mn, a[i]);
        }

        // Right side
        mn = a[pos];
        for (int i = pos + 1; i < N; i++) {
            ans += mn;
            mn = min(mn, a[i]);
        }

        cout << ans << endl;
    }

    return 0;
}