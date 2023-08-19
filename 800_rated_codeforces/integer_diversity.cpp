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

      vector<int> nums;
      for (int i = 0; i < n; i++){
         int x;
         cin>> x;

         nums.push_back(abs(x));
      }

      unordered_map<int, int> mp;
      for(int i = 0; i < n; i++){
         mp[nums[i]]++;
      }

      int diff_nums = 0;
      for (auto i: mp){
         if (i.first == 0){
            diff_nums += min(1, i.second);
         } else {
            diff_nums += min(2, i.second);
         }
      }

      cout<< diff_nums<< endl;
   }
   return 0;
}