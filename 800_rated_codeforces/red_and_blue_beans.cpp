#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll r, b, d;
      cin>> r>> b>> d;

      if (b < r){
         swap(b, r);
      }

      ll min_req_blue = r * (d + 1);
      
      if (b > min_req_blue){
         cout<< "NO"<< endl;
      } else {
         cout<< "YES"<< endl;
      }
   }
   return 0;
}