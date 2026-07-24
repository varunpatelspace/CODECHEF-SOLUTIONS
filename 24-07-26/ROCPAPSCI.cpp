/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : ROCPAPSCI                                                   ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 24, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/ROCPAPSCI                 ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


            int newR = max(p, s);
            int newP = max(r, s);
            int newS = max(r, p);

            if (x == 'S')
                newR++;

            if (x == 'R')
                newP++;

            if (x == 'P')
                newS++;

            r = newR;
            p = newP;
            s = newS;
        }

        cout << max({r, p, s}) << '\n';
    }

    return 0;
}