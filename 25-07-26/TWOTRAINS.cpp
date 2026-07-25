/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : TWOTRAINS                                                   ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : July 25, 2026                                               ║
 ║  URL      : https://www.codechef.com/problems/TWOTRAINS                 ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


        vector<int> P(N - 1);

        for (int i = 0; i < N - 1; i++) {
            cin >> P[i];
        }

        long long A = 0;
        long long B = 0;

        for (int i = 0; i < N - 1; i++) {

            
            A += P[i];

        
            B = max(A, B) + P[i];
        }

        cout << B << "\n";
    }

    return 0;
}