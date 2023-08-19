#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

void solve(int n, int m, int r, int c, int black_count, int white_count,
   vector<vector<char>> &grid){
      if (black_count == 0){
         cout<< -1<< endl;
         return;
      }

      if (grid[r - 1][c - 1] == 'B'){
         cout<< 0<< endl;
         return;
      }

      for (int i = 0; i < n; i++){
         if (grid[i][c - 1] == 'B'){
            cout<< 1<< endl;
            return;
         }
      }         
      for (int j = 0; j < m; j++){
         if (grid[r - 1][j] == 'B'){
            cout<< 1<< endl;
            return;
         }
      }
      cout<< 2<< endl;
}

int main(){
   int t;
   cin>> t;

   while(t--){
      int n, m, r, c;
      cin>> n>> m>> r>> c;

      int black_count = 0, white_count = 0;
      vector<vector<char>> grid(n, vector<char>(m));
      for (int i = 0; i < n; i++){
         for (int j = 0; j < m; j++){
            char x;
            cin>> x;
            grid[i][j] = x;

            if (x == 'B'){
               black_count++;
            } else white_count++;
         }
      }

      solve(n, m, r, c, black_count, white_count, grid);
   }
   return 0;
}