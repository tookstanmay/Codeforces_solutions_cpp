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

      vector<int> arr(n);
      for (auto &x: arr) cin>> x;

      stable_sort(arr.begin(), arr.end());
      vector<int> barr, dup_barr;
      barr.push_back(arr[0]);
      for (int i = 1; i < n; i++){
         if (arr[i] != barr.back()){
            barr.push_back(arr[i]);
         } else {
            dup_barr.push_back(arr[i]);
         }
      }

      for (auto i: barr) cout<< i<< " ";
      for (auto j: dup_barr) cout<< j<< " ";
      cout<< endl;
   }
   return 0;
}