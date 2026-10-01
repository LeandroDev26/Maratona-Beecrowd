#include <bits/stdc++.h>
using namespace std;

static char buf[1 << 25];
size_t bl = 0, bp = 0;

inline int gc() {
    if (bp == bl) {
        bl = fread(buf, 1, sizeof(buf), stdin);
        bp = 0;
        if (bl == 0) return -1;
    }
    return buf[bp++];
}

inline bool readInt(long long &x) {
    int c = gc();
    while (c != -1 && (c < '0' || c > '9')) c = gc();
    if (c == -1) return false;
    x = 0;
    while (c >= '0' && c <= '9') { x = x * 10 + (c - '0'); c = gc(); }
    return true;
}

// quartil j (1..3): Xk + frac * (Xk+1 - Xk), k = floor(j(n+1)/4)
double quartil(vector<int> &a, long long n, int j) {
    long long num = (long long)j * (n + 1);
    long long k = num / 4;      // 1-based
    long long rem = num % 4;    // fração = rem/4
    long long i = k - 1;        // 0-based
    if (i < 0) i = 0;
    if (i >= n) i = n - 1;
    nth_element(a.begin(), a.begin() + i, a.end());
    double lo = a[i], hi = lo;
    if (i + 1 < n) hi = *min_element(a.begin() + i + 1, a.end());
    return lo + (rem / 4.0) * (hi - lo);
}

int main() {
    long long n, v;
    while (readInt(n) && readInt(v)) {
        vector<int> a(n);
        for (long long i = 0; i < n; i++) {
            long long t;
            readInt(t);
            a[i] = (int)t;
        }

        double q1 = quartil(a, n, 1);
        double q3 = quartil(a, n, 3);
        double iqr = q3 - q1;

        // multiplicador 0.5 (bate com os exemplos do problema)
        double lo = q1 - 0.5 * iqr;
        double hi = q3 + 0.5 * iqr;

        long long p = 0;
        for (int x : a) if (x < lo || x > hi) p++;

        printf("%lld\n", p * v);
    }
    return 0;
}
