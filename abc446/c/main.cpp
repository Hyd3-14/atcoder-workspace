#include <bits/stdc++.h>
#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif
using namespace std;

template <typename T> using vec = vector<T>;
using ll = long long;
using ull = unsigned long long;
using vi = vec<int>;
using vl = vec<ll>;
using vvi = vec<vi>;
using vvl = vec<vl>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

#define rep(i, x, limit) for (int i = (int)x; i < (int)limit; i++)
#define REP(i, x, limit) for (int i = (int)x; i <= (int)limit; i++)
#define irep(i, x, limit) for (int i = (int)x; i > (int)limit; i--)
#define IREP(i, x, limit) for (int i = (int)x; i >= (int)limit; i--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define el '\n'
#define spa " "
#define Yes cout << "Yes" << el
#define No cout << "No" << el
#define YES cout << "YES" << el
#define NO cout << "NO" << el
#define eps (1e-10)
#define Equals(a, b) (fabs((a) - (b)) < eps)
#define debug(x) cerr << #x << " = " << x << el

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n, d;
        cin >> n >> d;

        vi a(n), b(n);

        // debug(T);
        deque<int> counts;
        rep(i, 0, n) { cin >> a[i]; }
        rep(i, 0, n) {
            bool decayed = true;
            counts.push_back(a[i]);
            cin >> b[i];
            while (b[i] > 0) {
                if (counts.front() >= b[i]) {
                    counts.front() -= b[i];
                    break;
                } else {
                    b[i] -= counts.front();
                    counts.pop_front();
                    decayed = false;
                }
            }
            if (decayed && d <= i)
                counts.pop_front();
            // int suma = 0;
            // for (auto s : counts) {
            //     suma += s;
            // }
            // debug(suma);
        }
        int sum = 0;
        for (auto s : counts) {
            sum += s;
        }
        cout << sum << el;
    }
}
