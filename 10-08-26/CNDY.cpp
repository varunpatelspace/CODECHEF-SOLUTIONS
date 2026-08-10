/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : CNDY                                                        ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 10, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/CNDY                      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

int main() {
    int t, n, a[100005];
    cin >> t;

    while(t--) {
        cin >> n;

        unordered_map<int, int> freq;
        bool flag = false;

        for(int i = 0; i < 2 * n; i++) {
            cin >> a[i];
            freq[a[i]]++;

            if(freq[a[i]] >= 3) {
                flag = true;
            }
        }

        if(flag==true) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
