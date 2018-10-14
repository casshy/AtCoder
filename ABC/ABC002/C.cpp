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

int xa, xb, xc;
int ya, yb, yc;

int get_input(){
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
}

int main(){
  get_input();

  xb -= xa;
  yb -= ya;
  xc -= xa;
  yc -= ya;

  double ans = abs(xb*yc-yb*xc) / 2.0;
  printf("%.1f\n", ans);
}
