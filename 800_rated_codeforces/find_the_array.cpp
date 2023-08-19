#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      int s;
      cin>> s;

      int count = 0, sum = 0, odd_nums = 1;
      while (sum < s){
         count++;
         sum += odd_nums;
         odd_nums += 2;
      }

      cout<< count<< endl;
   }
   return 0;
}