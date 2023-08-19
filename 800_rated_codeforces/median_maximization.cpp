#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll n, s;
      cin>> n>> s;

      n = n/ 2 + 1;
      cout<< s/ n<< endl;
   }
   return 0;
}