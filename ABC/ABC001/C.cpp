#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

string dir[] = {"N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "C"};
int calcDirection(double Deg){
  int i = (int)((Deg + 11.25) / 22.5) % 16;
  return i;
}
double power[] = {0, 0.2, 0.3, 1.5, 1.6, 3.3, 3.4, 5.4, 5.5, 7.9, 8.0, 10.7, 10.8, 13.8, 13.9, 17.1, 17.2, 20.7, 20.8, 24.4, 24.5, 28.4, 28.5, 32.6, 32.7, 10000000};
int calcPower(double v){
  v = round(v * 10) / 10;
  for(int i = 0; i < sizeof(power) / sizeof(power[0]); i+=2){
    if(power[i] <= v && v <= power[i+1]){
      return i / 2;
    }
  }
}

int Deg, Dis;
int main(){
  cin >> Deg;
  cin >> Dis;

  int idir = calcDirection((double)Deg / 10);
  int ipower = calcPower((double)Dis / 60);

  if(ipower == 0) idir = 16;
  cout << dir[idir] << " " << ipower << endl;
  return 0;
}
