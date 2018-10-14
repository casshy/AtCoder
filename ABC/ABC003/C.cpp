#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int N, K;
vector<int> R;

int get_input(){
  cin >> N >> K;
  R = vector<int>(N);
  for(int i = 0; i < N; i++){
    cin >> R[i];
  }
}

int main(){
  get_input();
  double ans;

  sort(R.begin(), R.end());
  for(int i = K; i > 0; i--){
    ans = (ans + R[N-i]) / 2.0;
  }
  cout << setprecision(20) << ans << endl;
}
