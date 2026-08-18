/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : RATINGINPRAC                                                ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 18, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/RATINGINPRAC              ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    int t;
    cin >> t;
    while(t--) {
        int n;
        int count = 0;
        cin >> n;
        int d[n];
        for(int i = 0; i < n; i++) {
            cin >> d[i];
        }
        for(int i = 0; i < n - 1; i++) {
            if(d[i] <= d[i + 1]) {
                count++;
            }
        }
        if(count == n - 1) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}