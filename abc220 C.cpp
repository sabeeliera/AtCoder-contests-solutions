#include<bits/stdc++.h>
using namespace std;

int main() {
    long long  n, x;
    cin >> n;
    vector<long long> a(n);
    long long suma = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        suma += a[i];
    }
    cin >> x;
    long long ans1 = 0, ans2 = 0, res = 0;
    ans1 = x / suma;
    ans2 = suma * ans1;
    res = ans1 * n;

    for (long long val : a) {
        ans2 += val;
        res++;
        if (ans2 > x) {
            cout << res << endl;
            return 0;
        }
    }
    return 0;
}
