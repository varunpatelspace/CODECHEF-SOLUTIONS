/*
 ╔═══════════════════════════════════════════════════════════════════════╗
 ║  Problem  : STRP                                                        ║
 ║  Platform : CodeChef                                                  ║
 ║  Status   : Accepted                                                    ║
 ║  Date     : August 14, 2026                                             ║
 ║  URL      : https://www.codechef.com/problems/STRP                      ║
 ╚═══════════════════════════════════════════════════════════════════════╝
 */

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]==s[i+1]){
                c++;
                i++;
            }
            else{
                c++;
            }
        }
        cout<<c<<endl;
    }
    
    
}
