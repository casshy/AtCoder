#include <bits/stdc++.h>
using namespace std;
 
string S, T;
 
int get_input(){
  cin >> S;
  cin >> T;
}
 
int main(){
  get_input();
 
  int i;
  int ans = 0;
  for(i = 0; i < S.size(); i++){
    char c1, c2;
    c1 = S[i];
    c2 = T[i];
    if(c1 == '@' || c2 == '@'){
      if(c1 == '@'){
	char tmp=c2;
	c2 = c1;
	c1 = tmp;
      }
      if(!(c1=='a'||c1=='t'||c1=='c'||c1=='o'||c1=='d'||c1=='e'||c1=='r'||c1=='@')){
	cout << "You will lose" << endl;
	return 0;
      }
    }else{
      if(c1 != c2){
	cout << "You will lose" << endl;
	return 0;
      }
    }
  }
  cout << "You can win" << endl;
}
