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

      vector<string> bigrams(n - 2);
      for (auto &x: bigrams) cin>> x;

      bool found = false;
      for (int i = 0; i < bigrams.size() - 1; i++){
         if (bigrams[i][1] != bigrams[i + 1][0]){
            string temp = "";
            temp += bigrams[i][1];
            temp += bigrams[i + 1][0];
            bigrams.insert(bigrams.begin() + i + 1, temp);
            found = true;
            break;
         }
      }

      if (!found){
         bigrams.push_back("ab");
      }

      string ans_string = bigrams[0];
      for (int i = 1; i < bigrams.size(); i++){
         ans_string += bigrams[i][1];
      }

      cout<< ans_string<< endl;

   }
   return 0;
}