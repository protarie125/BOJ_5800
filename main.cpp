#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

ll k;
ll n;
ll mx;
ll mn;
ll gap;
vl A;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> k;
  for (auto i = 1; i <= k; ++i) {
    cout << "Class " << i << '\n';

    cin >> n;
    A = vl(n);
    mx = 0;
    mn = 101;
    gap = 0;

    for (auto j = 0; j < n; ++j) {
      cin >> A[j];
    }

    sort(A.begin(), A.end());

    for (auto j = 0; j < n; ++j) {
      auto& x = A[j];
      mx = max(mx, x);
      mn = min(mn, x);
      if (1 <= j) {
        gap = max(gap, abs(A[j] - A[j-1]));
      }
    }

    cout << "Max " << mx << ", Min " << mn << ", Largest gap " << gap
         << '\n';
  }

  return 0;
}