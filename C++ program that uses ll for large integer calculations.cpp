#include <bits/stdc++.h>
using namespace std;

// type alias for long long
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cout << "Enter two large numbers: ";
    cin >> a >> b;

    ll sum = a + b;
    ll product = a * b;

    cout << "Sum = " << sum << "\n";
    cout << "Product = " << product << "\n";

    return 0;
}
