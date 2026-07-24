/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : MAXREM                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 24, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/MAXREM                    ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // Largest element
    long long largest = a[n - 1];

    // Largest se different element dhundo
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] != largest) {
            cout << a[i] << '\n';
            return 0;
        }
    }

    // Sab elements same hain
    cout << 0 << '\n';

    return 0;
}