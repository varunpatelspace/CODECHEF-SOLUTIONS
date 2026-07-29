/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : GPUBUY                                                      ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 29, 2026                                               ║
 ║  URL      : https://www.codechef.com/START249D/problems/GPUBUY          ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

        cin >> X >> Y >> Z;

        int price = X;
        int coins = 0;
        bool found = false;

        for (int month = 1; month <= 10000; month++) {
            price += Y;
            coins += Z;

            if (coins >= price) {
                cout << month << "\n";
                found = true;
                break;
            }
            if (Z <= Y) break;
        }

        if (!found)
            cout << -1 << "\n";
    }

    return 0;
}