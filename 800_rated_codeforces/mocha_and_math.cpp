# include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while (t--){
        int n;
        cin>> n;

        long long int f;
        cin>> f;

        for (int i = 2; i <= n; i++){
            long long int s;
            cin>> s;

            f &= s;
        }

        cout<< f<< endl;
    }
    return 0;
}