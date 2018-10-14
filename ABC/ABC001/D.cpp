#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <sstream>
using namespace std;
#define N_MAX 30000
int N;
int S[N_MAX], E[N_MAX];

std::vector<std::string> split(const std::string &str, char sep)
{
    std::vector<std::string> v;
    std::stringstream ss(str);
    std::string buffer;
    while( std::getline(ss, buffer, sep) ) {
        v.push_back(buffer);
    }
    return v;
}
int main(){
  cin >> N;
  for(int i = 0; i < N; i++){
    string tmp;
    cin >> tmp;
    vector<string> str = split(tmp, '-');
    S[i] = atoi(str[0].c_str());
    E[i] = atoi(str[1].c_str());
  }
  for(int i = 0; i < N; i++){
    S[i] = S[i] - S[i]%5;
    if(S[i] % 100 == 60) S[i] += 40;
    if(E[i] % 5 != 0){
      E[i] = E[i] + (5-E[i]%5);
      if(E[i] % 100 == 60) E[i] += 40;
    }
  }

  int time[482] = {0};
  for(int i = 0; i < N; i++){
    time[S[i]/5+1]++;
    time[E[i]/5+1]--;
  }
  for(int i = 1; i < 482; i++){
    time[i] += time[i-1];
  }
  
  for(int i = 0; i < 482 - 1; i++){
    if(time[i] == 0 && time[i+1] > 0)
      cout << setfill('0') << setw(4) << i*5 << "-";
    if(time[i] > 0 && time[i+1] == 0)
      cout << setfill('0') << setw(4) << i*5 << endl;
  }
}
