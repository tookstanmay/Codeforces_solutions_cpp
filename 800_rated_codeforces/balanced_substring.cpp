#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64

void solve(string str){
      for (int i = 1; i < str.length(); i++){
         if (str[i] != str[i - 1]){
            cout<< (i)<< " "<< (i + 1)<< endl;
            return;
         }
      }
      cout<< -1<< " "<< -1<< endl;
}

int main(){
   int t;
   cin>> t;

   while(t--){
      int n;
      cin>> n;

      string str;
      cin>> str;

      solve(str);
   }
   return 0;
}