#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define rep3(i, m, n) for(int i = (m); i < (int)(n); i++)
#define ALL(x) std::begin(x), std::end(x)
#define debug()                                                                \
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

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  map<string, int> sCount;
  rep(i, N) {
    string s;
    cin >> s;
    sCount[s]++;
  }

  bool isContained = false;
  for(auto [s, count] : sCount) {
    if(count >= 2)
      isContained = true;
  }

  cout << (isContained ? "Yes" : "No") << endl;
  return 0;
}
