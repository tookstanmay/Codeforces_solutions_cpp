# include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>> t;

    while(t--){
        int n;
        cin>> n;
        
        string str;
        cin>> str;

        bool check = true;
        unordered_map<char, vector<int>> mapping;
        for (int i = 0; i < n; i++){
            char ch = str[i];

            if (i != 0){
                if (mapping.find(ch) != mapping.end()){
                if ((i - mapping[ch].back() > 1) && str[i] != str[i - 1]){
                    check = false;
                    break;
                }
            }
            }
            mapping[ch].push_back(i);
        }

        if (!check){
            cout<< "NO"<< endl;
        } else {
            cout<< "YES"<< endl;
        }

    }

    return 0;
}