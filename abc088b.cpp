#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    //配列の初期化
    vector<int> a(n);
    for(int i=0; i<n; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end(), greater<int>()); //ソート

    int alice = 0;
    int bob = 0;
    for(int i=0; i<n; i++) {
        if (i%2 == 0) alice += a.at(i);
        else bob += a.at(i);
    }

    cout << alice - bob << endl;

}