#include<bits/stdc++.h>
using namespace std;
double m, VV;
int main(){
  cin >> m;
  m = m / (double)1000;
  if(m < 0.1){
    VV = 0;
  }else if(m <= 5){
    VV = m*10;
  }else if(m <= 30){
    VV = m + 50;
  }else if(m <= 70){
    VV = (m - 30) / 5 + 80;
  }else if(m > 70){
    VV = 89;
  }
  cout << setfill('0') << setw(2) << (int)VV << endl;
}
