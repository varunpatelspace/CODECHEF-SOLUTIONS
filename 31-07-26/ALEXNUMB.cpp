/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ALEXNUMB                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 31, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/ALEXNUMB                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (a[i] < a[j])
                    ans++;
            }
        }

        cout << ans << "\n";
    }

    return 0;
}