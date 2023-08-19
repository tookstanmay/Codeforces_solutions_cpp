#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll a, b, c;
      cin>> a>> b>> c;
      
      ll sum = a + (2 * b) + (3 * c);
      cout<< (sum % 2 == 0? 0: 1)<< endl;
   }
   return 0;
}