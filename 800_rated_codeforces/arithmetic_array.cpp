# include<bits/stdc++.h>
# define ll long long int
using namespace std;

int main(){
    
    int t;
    cin>> t;
    while (t--){
        int k;
        cin>> k;

        ll sum = 0;
        for (int i = 0; i < k; i++){
            int x;
            cin>> x;

            sum += x;
        }

        if (sum < k){
            cout<< 1<< endl;
        }
        else if (sum == k){
            cout<< 0<< endl;
        }
        else {
            cout<< (sum - k)<< endl;
        }
    }
    return 0;
}