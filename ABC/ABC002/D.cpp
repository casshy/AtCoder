#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;

#define N_MAX 12
int N, M;
int table[N_MAX][N_MAX];

void get_input(){
  cin >> N >> M;
  
  int x, y;
  for(int i = 0; i < M; i++){
    cin >> x >> y;
    x--;
    y--;
    table[x][y] = table[y][x] = 1;
  }
  for(int i = 0; i < N; i++){
    table[i][i] = 1;
  }
}

int comb[N_MAX], ans;
vector<int> combi(0);
void combination(int comb[], int i, int b){
  if(b)
    combi.push_back(i);
  for(int ii = i + 1; ii < N; ii++){
    combination(comb, ii, 0);
    combination(comb, ii, 1);
    combi.pop_back();
  }
  if(i == N - 1){
    int c = 1;
    
    for(int j = 0; j < (int)combi.size(); j++){
      int n1 = combi[j];
      for(int k = j; k < (int)combi.size(); k++){
	int n2 = combi[k];
      	c &= table[n1][n2];
      }
    }
    if(c){
      ans = max(ans, (int)combi.size());
    }
  }
}

int main(){
  get_input();

  ans = 1;
  combination(comb, 0, 0);
  combination(comb, 0, 1);

  cout << ans << endl;
}
