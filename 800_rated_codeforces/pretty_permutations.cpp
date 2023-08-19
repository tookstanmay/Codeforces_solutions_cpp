#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned __int64



int main(){
    int t;
    cin>> t;

    while (t--){
        int n;
        cin>> n;

        vector<int> cats(n);
        int j = 1;
        for (auto &i: cats){
            i = j;
            j++;
        }

        for (int i = 0; i < n - 1; i += 2){
            swap(cats[i], cats[i + 1]);
        }

        if (n % 2 == 1){
            swap(cats[n - 1], cats[n - 2]);
        }

        for (auto i: cats){
            cout<< i<< " ";
        }   cout<< endl;
    }
    return 0;
}