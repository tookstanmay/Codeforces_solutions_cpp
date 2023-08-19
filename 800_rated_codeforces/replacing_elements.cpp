#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      int n, d;
      cin>> n>> d;

      vector<int> min_arr;
      int cnt = 0;
      for (int i = 0; i < n; i++){
         int x;
         cin>> x;

         if (x <= d) min_arr.push_back(x);
         else cnt++;
      }

      if (cnt == 0){
         cout<< "YES"<< endl;
      } else {
         if (min_arr.size() < 2){
            cout<< "NO"<< endl;
         } else {
            stable_sort(min_arr.begin(), min_arr.end());
            cout<< (min_arr[0] + min_arr[1] <= d? "YES": "NO")<< endl;
         }
      }
   }
   return 0;
}