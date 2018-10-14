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

int X, Y;

int get_input(){
  cin >> X >> Y;
}

int main(){
  get_input();

  cout << max(X, Y) << endl;
}
