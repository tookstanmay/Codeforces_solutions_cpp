#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll a, b;
      cin>> a>> b;

      ll ans = ceil(double(abs(a - b))/ 10);
      cout<< ans<< endl;
   }
   return 0;
}