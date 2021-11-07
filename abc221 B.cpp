#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    string s, t;
    cin >> s;
    cin >> t;
 
    if (s == t) {
        puts("Yes");
    } else {
        bool ok = false;
        for (int i = 0; i < (int)s.size()-1; i++) {
            string u = s;
            swap(u[i], u[i+1]);
            if (u == t) {
                ok = true;
            }
        }
        if (ok) {
            puts("Yes");
        } else {
            puts("No");
        }
    }
 
    return 0;
}
