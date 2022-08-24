#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    bool j = true;
    vector<int> v(n);
    int cnt = 0;

    //配列の初期化
    for(int i=0;i<n; i++) {
        cin >> v.at(i);
    }

    while(j) {
        for(int i=0;i<n; i++) {
            if (v.at(i)%2==0) v.at(i)/= 2;
            else j = false;
        }
        if(j == true) cnt++;
    }

    cout << cnt << endl;
}