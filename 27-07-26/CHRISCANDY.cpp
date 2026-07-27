/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHRISCANDY                                                  ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 27, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/CHRISCANDY                ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    while(t--) {
        cin >> n;

        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int count = 0;
        int maxi = a[1];

        for(int i = 2; i <= n; i++) {

            if(maxi > a[i]) {
                count++;
            }

            maxi = max(maxi, a[i]);
        }

        cout << count << endl;
    }

    return 0;
}
