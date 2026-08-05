/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : JUMPCOST                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 5, 2026                                              ║
 ║  URL      : https://www.codechef.com/START250D/problems/JUMPCOST        ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N + 1), count(N + 1);

        for (int i = 1; i <= N; i++)
            cin >> A[i];

        count[1] = 0;
        long long best = 1;   // dp[1] + 1
        long long ans = 0;

        for (int i = 2; i <= N; i++) {
          count[i] = A[i] - i + best;
            ans = max(ans, count[i]);
            best = max(best, count[i] + i);
        }

        cout << ans << "\n";
    }