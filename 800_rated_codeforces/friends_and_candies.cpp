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

        vector<int> arr(n);
        for (auto &i: arr) cin>> i;

        int sum = accumulate(arr.begin(), arr.end(), 0);
        if (sum % n == 0){
            int minValue = sum/ n;
            
            int count = 0;
            for (auto i: arr){
                if (i > minValue){
                    count++;
                }
            }
            cout<< count<< endl;
        } else {
            cout<< -1<< endl;
        }
    }
    return 0;
}