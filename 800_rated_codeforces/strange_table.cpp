#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64
#define ld long double


int main(){
   int t;
   cin>> t;

   while(t--){
      ll n, m, x;
      cin>> n>> m>> x;

      --x;
      ll col_x = x/ n;
      ll row_x = x % n;

      ll element = (m * row_x) + 1 + col_x;
      cout<< element<< endl;

   }
   return 0;
}