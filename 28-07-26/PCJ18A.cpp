/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : PCJ18A                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 28, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/PCJ18A?tab=statement      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        bool found = false;

        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;

            if (a >= x)
                found = true;
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}