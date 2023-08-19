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

      vector<vector<char>> field(n, vector<char>(n));
      vector<pair<int, int>> rows_and_cols;
      for (int i = 0; i < n; i++){
         for (int j = 0; j < n; j++){
            cin>> field[i][j];

            if (field[i][j] == '*'){
               rows_and_cols.push_back({i, j});
            }
         }
      }

      int row_1 = rows_and_cols[0].first, col_1 = rows_and_cols[0].second;
      int row_2 = rows_and_cols[1].first, col_2 = rows_and_cols[1].second;

      // case 1: same row
      if (row_1 == row_2){
         if (row_1 == n - 1){
            field[row_1 - 1][col_1] = '*';
            field[row_2 - 1][col_2] = '*';
         } else {
            field[row_1 + 1][col_1] = '*';
            field[row_2 + 1][col_2] = '*';
         }
      } 
      
      // case 2: same col
      else if (col_1 == col_2){
         if (col_1 == n - 1){
            field[row_1][col_1 - 1] = '*';
            field[row_2][col_2 - 1] = '*';
         } else{
            field[row_1][col_1 + 1] = '*';
            field[row_2][col_2 + 1] = '*';
         }
      }

      // case 3: diff everything
      else {
         field[row_1][col_2] = '*';
         field[row_2][col_1] = '*';
      }

      for (auto i: field){
         for (auto j: i){
            cout<< j;
         }  cout<< endl;
      }
   }
   return 0;
}