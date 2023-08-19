#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      string str;
      cin>> str;

      int zero_cnt = count(str.begin(), str.end(), '0');
      if (zero_cnt == 0) cout<< 0<< endl;

      else {
         int first_occ_zero = str.find('0');
         int last_occ_zero = str.rfind('0');
         if (last_occ_zero - first_occ_zero + 1 == zero_cnt) cout<< 1<< endl;
         else cout<< 2<< endl;
      }
   }
   return 0;
}