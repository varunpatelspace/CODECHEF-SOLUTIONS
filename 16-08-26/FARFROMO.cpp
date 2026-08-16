/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : FARFROMO                                                    ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 16, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/FARFROMO                  ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y, x1, y1;
        cin >> x >> y >> x1 >> y1;

        int p = x * x + y * y;
        int p1 = x1 * x1 + y1 * y1;

        if (p == p1) {
            cout << "EQUAL" << endl;
        }
        else if (p > p1) {
            cout << "ALEX" << endl;
        }
        else {
            cout << "BOB" << endl;
        }
    }

    return 0;
}
