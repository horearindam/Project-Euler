#include <bits/stdc++.h>
using namespace std;

static long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

static long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

static long long solve() {
    long long result = 1;

    for (int i = 1; i <= 20; ++i) {
        result = lcm(result, i);
    }

    return result;
}

int main() {
    volatile auto result = solve();
    (void) result;
}
