#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> v(s.size());
    int cnt = 0;
    for(int i=0; i<s.size();i++){
        v.at(i) = (int)(s[i]-'0');
        if(v.at(i) == 1) cnt++; 
    }
    cout << cnt << endl;
}