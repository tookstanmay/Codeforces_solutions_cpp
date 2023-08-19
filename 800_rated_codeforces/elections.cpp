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

      ll max_a = max(0LL, max(b, c) + 1 - a);
      ll max_b = max(0LL, max(a, c) + 1 - b);
      ll max_c = max(0LL, max(a, b) + 1 - c);

      cout<< max_a<< " "<< max_b<< " "<< max_c<< endl;

   }
   return 0;
}