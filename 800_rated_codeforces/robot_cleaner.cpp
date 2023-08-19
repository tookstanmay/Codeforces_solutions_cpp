#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      int n, m, rb, cb, rd, cd;
      cin>> n>> m>> rb>> cb>> rd>> cd;

      cout<< min(
         rb <= rd? rd - rb: 2 * n - rb - rd,
         cb <= cd? cd - cb: 2 * m - cd - cb
      )<< endl;
   }
   return 0;
}