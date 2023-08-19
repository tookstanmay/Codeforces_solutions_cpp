#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      int n;
      cin>> n;

      for (int i = 0; i < n; i++){
         cout<< (i + 1) % n + 1<< " ";
      }  cout<< endl;
   }
   return 0;
}