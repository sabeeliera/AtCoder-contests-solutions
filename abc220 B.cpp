#include <bits/stdc++.h>
using namespace std;

int xyz(int k, int m){
	int ans = 1;
	for (int i = 0; i < m; i++){
		ans *= k;
	}return ans;
}

int main() {
	int k;
	cin >> k;
	string a, b;
	cin >> a >> b;
	long long a1 = 0, b1 = 0;
	int m = a.size() - 1, n = b.size() - 1;
	for (int i = 0; i < a.size(); i++){
		a1 = a1 + (a[i] - '0') * xyz(k, m);
		m--;
	}for (int i = 0; i < b.size(); i++){
		b1 = b1 + (b[i] - '0') * xyz(k, n);
		n--;
	}cout << a1 * b1;
	return 0;
}
