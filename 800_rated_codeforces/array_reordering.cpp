# include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while (t--){
        int n;
        cin>> n;

        vector<int> total, even, odd;
        for (int i = 0; i < n; i++){
            int x;
            cin>> x;

            if (x % 2 == 0){
                even.push_back(x);
            }
            else {
                odd.push_back(x);
            }
        }

        for (auto i: even){
            total.push_back(i);
        }
        for (auto j: odd){
            total.push_back(j);
        }

        int count = 0;
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (__gcd(total[i], 2 * total[j]) > 1){
                    count++;
                }
            }
        }

        cout<< count<< endl;
    }
    return 0;
}