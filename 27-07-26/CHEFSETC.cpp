/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CHEFSETC                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 27, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/CHEFSETC                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


            int sum = 0;

            for(int i = 0; i < 4; i++) {

                if(mask & (1 << i)) {
                    sum += arr[i];
                }
            }

            if(sum == 0) {
                found = true;
                break;
            }
        }

        if(found)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}