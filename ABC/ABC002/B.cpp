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

string W;

int get_input(){
  cin >> W;
}

int main(){
  get_input();

  char *c_str;
  for(c_str = (char*)W.c_str(); *c_str != '\0'; c_str++){
    switch(*c_str){
    case 'a':
    case 'i':
    case 'u':
    case 'e':
    case 'o':
      continue;
    default:
      cout << *c_str;
    }
  }
  cout << endl;
}
