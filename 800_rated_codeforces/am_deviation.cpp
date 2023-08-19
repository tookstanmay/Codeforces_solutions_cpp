#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll a1, a2, a3;
      cin>> a1>> a2>> a3;

      if ((a1 + a2 + a3) % 3 == 0){
         cout<< 0<< endl;
      } else cout<< 1<< endl;
   }
   return 0;
}