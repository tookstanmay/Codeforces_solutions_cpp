# include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while (t--){
        long long n;
        cin>> n;

        int ans = 0;
        for (long long i = 1; i <= 9; i++){
            for (long long j = i; j <= n; ){
                ans++;
                j = j * 10 + i;
            }
        }

        cout<< ans<< endl;
    }
    return 0;
}