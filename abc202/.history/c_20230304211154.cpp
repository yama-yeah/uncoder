#include <iostream>
#include <map>
#include <cmath>
using namespace std;

typedef long long ll;

int main() {
    ll n;
    cin >> n;

    map<ll, ll> mp1, mp2;

    // A*BとC*Dの組み合わせを計算する
    for (ll i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ll j = n / i;
            mp1[i] = j;
            mp2[j] = i;
        }
    }

    // AB+CD=Nを満たす組み合わせをカウントする
    ll cnt = 0;
    for (auto p : mp1) {
        ll a = p.first, b = p.second;
        if (a > b) break; // a > b となる組み合わせは重複するので、カウントしない
        if (mp2.find(a + b) != mp2.end()) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
