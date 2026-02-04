#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

static int solve() {
    int maxPalindrome = 0;

    for (int i = 999; i >= 100; --i) {
        for (int j = i; j >= 100; --j) {
            int product = i * j;

            if (product <= maxPalindrome)
                break;

            if (isPalindrome(product)) {
                maxPalindrome = product;
            }
        }
    }

    return maxPalindrome;
}

int main() {
    volatile auto result = solve();
    (void) result;
}
