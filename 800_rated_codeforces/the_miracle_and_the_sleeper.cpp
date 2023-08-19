#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll l, r;
      cin>> l>> r;

      if (r < 2 * l) cout<< (r - l)<< endl;
      else cout<< (r - 1)/ 2<< endl;
   }
   return 0;
}