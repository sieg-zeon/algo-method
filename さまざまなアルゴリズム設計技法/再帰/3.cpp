#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) x.begin(), x.end()
#define debug(var)                                                             \
  do {                                                                         \
    view(var);                                                                 \
  } while(0)
#define debugN(var)                                                            \
  do {                                                                         \
    std::cout << #var << " : ";                                                \
    view(var);                                                                 \
  } while(0)
template <typename T> void view(T e) { std::cout << e << std::endl; }
template <typename T> void view(const std::vector<T> &v) {
  for(const auto &e : v) {
    std::cout << e << " ";
  }
  std::cout << std::endl;
}
template <typename T> void view(const std::vector<std::vector<T>> &vv) {
  for(const auto &v : vv) {
    view(v);
  }
}

vector<int> memo;
int calc(int num) {
  if(memo[num] != -1)
    return memo[num];
  if(num == 0) {
    memo[num] = 0;
  } else if(num == 1) {
    memo[num] = 1;
  } else {
    memo[num] = calc(num - 2) + calc(num - 1);
  }
  return memo[num];
}

int main() {
  int N;
  cin >> N;
  memo.resize(N + 1, -1);
  debug(calc(N));

  return 0;
}

// 遅いのでメモ化が必要
// int calc(int num) {
//   if(num == 0)
//     return 0;
//   if(num == 1)
//     return 1;

//   return calc(num - 2) + calc(num - 1);
// }

// int main() {
//   int N;
//   cin >> N;
//   debug(calc(N));

//   return 0;
// }
