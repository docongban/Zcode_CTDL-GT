/*Code By BanDC*/
//VS Code
#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n, v;
    cin >> n >> v;
    long long a[n + 1], c[n + 1];
    for (int i = 1; i <= n; i ++) {
        cin >> c[i];
    }
    for (int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    long long res[n + 1][v + 1];
    for (int i = 0; i <= n; i ++) {
        for (int j = 0; j <= v; j ++) {
            res[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= v; j ++) {
            if (j >= a[i]) {
                res[i][j] = max(res[i - 1][j], c[i] + res[i - 1][j - a[i]]);
            } else {
                res[i][j] = res[i - 1][j];
            }
        }
    }
    cout << res[n][v] << "\n";
    int b[n + 1];
    int pos = n;
    while (pos > 0) {
        if (res[pos][v] != res[pos - 1][v]) {
            b[pos] = 1;
            v -= a[pos];
        } else {
            b[pos] = 0;
        }
        pos--;
    }
    for (int i = 1; i <= n; i ++) {
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}
