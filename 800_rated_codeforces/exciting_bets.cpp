# include<bits/stdc++.h>
# define ll long long int
using namespace std;

int findElement(vector<long long> arr, int value){
    int s = 0, e = arr.size() - 1;

    while (s < e){
        int m = (s + e)/ 2;

        if (arr[m] == value) return m;
        else if (arr[m] > value) e = m - 1;
        else s = m + 1;
    }

    return -1;
}

int main(){
    
    int t;
    cin>> t;

    while (t--){

        ll a, b;
        cin>> a>> b;

        if (a > b) swap(a, b);
        ll ans = b - a;
        if (ans == 0) cout<< 0<< " "<< 0<< endl;
        else{
            ll first = a % ans;
            ll second = ans - first;

            cout<< ans<< " "<< min(first, second)<< endl;
        }
    }
    return 0;
}