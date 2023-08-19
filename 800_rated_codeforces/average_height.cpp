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

      vector<int> odd_heights, even_heights;
      for (int i = 0; i < n; i++){
         int x;
         cin>> x;

         if (x % 2 == 0) even_heights.push_back(x);
         else odd_heights.push_back(x);
      }

      for (auto i: odd_heights){
         cout<< i<< " ";
      }
      for (auto j: even_heights){
         cout<< j<< " ";
      } cout<< endl;
   }
   return 0;
}