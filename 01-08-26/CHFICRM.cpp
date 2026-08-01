/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHFICRM                                                     ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 1, 2026                                              ║
 ║  URL      : https://www.codechef.com/problems/CHFICRM                   ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

            else if (x == 10) {
                if (five > 0) {
                    five--;
                    ten++;
                } else {
                    ok = false;
                }
            }
            else {
                if (ten > 0) {
                    ten--;
                }
                else if (five >= 2) {
                    five -= 2;
                }
                else {
                    ok = false;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << "\n";
    }

    return 0;
}