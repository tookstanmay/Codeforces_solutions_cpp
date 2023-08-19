#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
   int t;
   cin>> t;

   while(t--){
      ll n, h;
      cin>> n>> h;

      vector<int> a(n);
      for (auto &x: a) cin>> x;

		sort(a.begin(), a.end());
		int x = a[n - 1];
		int y = a[n - 2];
		if (h % (x + y) == 0) {
			cout << 2 * (h / (x + y));
		} else if (h % (x + y) <= x) {
			cout << 2 * (h / (x + y)) + 1;
		} else {
			cout << 2 * (h / (x + y)) + 2;
		} cout<< endl;
   }
   return 0;
}