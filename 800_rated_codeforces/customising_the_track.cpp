# include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while (t--){
        int n;
        cin>> n;

        long long sum = 0;
        for (int i = 0; i < n; i++){
            long long input;
            cin>> input;
            sum  += input;
        }

        long long ans = sum % n;

        cout<< (ans * (n - ans))<< endl;    
    }
    return 0;
}