/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : RECENTCONT                                                  ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 15, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/RECENTCONT                ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */


int main() {
    int t;
    string s[1000];
    cin >> t;
    while(t--) {
        int n;
        int p = 0;
        int l = 0;
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> s[i];

            if(s[i] == "START38") {
                p++;
            } else {
                l++;
            }
        }
        cout << p << " " << l << endl;
    }

    return 0;
}