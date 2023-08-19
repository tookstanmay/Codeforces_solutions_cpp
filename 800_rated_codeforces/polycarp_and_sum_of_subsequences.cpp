#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      vector<ll> nums(7);
      for (auto &x: nums) cin>> x;

      ll first_num = nums[0];
      ll second_num = nums[1];
      ll third_num = nums.back() - first_num - second_num;

      cout<< first_num<< " "<< second_num<< " "<< third_num<< endl;
   }
   return 0;
}