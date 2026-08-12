/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHEFARRP                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/CHEFARRP                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


        int ans = 0;

        for(int i = 0; i < n; i++) {

            int sum = 0;
            int product = 1;

            for(int j = i; j < n; j++) {

                sum = sum + a[j];
                product = product * a[j];

                if(sum == product) {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}