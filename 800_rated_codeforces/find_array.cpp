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

      for (int i = 2; i <= n + 1; i++){
         cout<< i<< " ";
      }  cout<< endl;
   }
   return 0;
}