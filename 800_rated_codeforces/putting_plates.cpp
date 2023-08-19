#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      int h, w;
      cin>> h>> w;

      vector<vector<int>> plates(h, vector<int> (w, 0));

      for (int i = 0; i < w; i += 2){
         plates[0][i] = 1;
         plates[h - 1][i] = 1;
      }

      for (int i = 2; i < h; i += 2){
         if (h - i > 2){
            plates[i][0] = 1;
            plates[i][w - 1] = 1;
         }
      }

      for (auto &i: plates){
         for (auto &j: i) cout<< j;
         cout<< endl;
      }
      cout<< endl;
   }
   return 0;
}