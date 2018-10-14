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

int H1, H2;

int get_input(){
  cin >> H1;
  cin >> H2;
}

int main(){
  get_input();

  cout << H1 - H2 << endl;
}
