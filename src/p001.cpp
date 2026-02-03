#include <bits/stdc++.h>
using namespace std;

static long long solve() {
    long long sum = 0;
    for (int i = 1; i < 1000; ++i)
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    return sum;
}

int main() {
    volatile auto result = solve();
    (void)result;
}
