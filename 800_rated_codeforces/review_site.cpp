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


      int cnt = 0;
      for (int i = 0; i < n; i++){
         int x;
         cin>> x;

         if (x != 2) cnt++;
      }

      cout<< cnt<< endl;
   }
   return 0;
}