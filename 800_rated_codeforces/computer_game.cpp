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

      vector<vector<char>> path(2, vector<char>(n));
      for (auto &i: path){
         for (auto &j: i){
            cin>> j;
         }
      }

      if (path[0][0] == '1' || path[1][n - 1] == '1') cout<< "NO"<< endl;
      else {
         bool found = true;
         for (int i = 0; i < n - 1; i++){
            if (path[0][i + 1] == '1' && path[1][i + 1] == '1'){
               found = false;
               break;
            }
         }
         cout<< (found? "YES": "NO")<< endl;
      }
   }
   return 0;
}