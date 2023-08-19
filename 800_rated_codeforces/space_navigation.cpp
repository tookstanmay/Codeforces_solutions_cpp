#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

int main(){
   int t;
   cin>> t;

   while(t--){
      int Px, Py;
      cin>> Px>> Py;

      string orders;
      cin>> orders;

      char x = '0', y = '0';
      (Px > 0? x = 'R': x = 'L');
      (Py > 0? y = 'U': y = 'D');

      int count_x = count(orders.begin(), orders.end(), x),
      count_y = count(orders.begin(), orders.end(), y);

      bool is_X = false, is_Y = false;
      (count_x >= abs(Px)? is_X = true: is_X = false);
      (count_y >= abs(Py)? is_Y = true: is_Y = false);
      
      cout<< (is_X && is_Y? "YES": "NO")<< endl;
   }
   return 0;
}