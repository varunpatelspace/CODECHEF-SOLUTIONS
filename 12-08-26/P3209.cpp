/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : P3209                                                       ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 12, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/P3209?tab=statement       ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

    cin>>t;
    while(t--){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    sort(a.begin(), a.end(), [&](int x, int y) {
        int gx = gcd(x, n);
        int gy = gcd(y, n);
        if (gx != gy)
   return gx > gy;   
    });
    for (int x : a) {
    cout << x << " ";
    }
     cout << "\n";
}
    return 0;
}