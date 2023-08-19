# include<bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr(1001);
    int j = 1;
    for (int i = 1; i <= 1666; i++){
        if (i % 3 != 0){
            if (i % 10 != 3){
                arr[j] = i;
                j++;
            }
        }
    }
    
    int t;
    cin>> t;
    
    while (t--){
        int k;
        cin>> k;

        cout<< arr[k]<< endl;
    }
    return 0;
}