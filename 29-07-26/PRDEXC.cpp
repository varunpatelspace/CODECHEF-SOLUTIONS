/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PRDEXC                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/START249D/problems/PRDEXC          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        cin >> X >> Y >> P;

        if (X * Y >= P) {
            cout << 0 << "\n";
            continue;
        }

        long long ans = LLONG_MAX;

        for (long long i = 0; i <= P; i++) {
            long long newX = X + i;

            long long needY = (P + newX - 1) / newX;   // ceil(P/newX)

            long long j = max(0LL, needY - Y);

            ans = min(ans, i + j);

            if (newX > P) break;
        }

        cout << ans << "\n";
    }

    return 0;
}