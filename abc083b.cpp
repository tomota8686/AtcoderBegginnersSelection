#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int sum = 0;
    
    int t, ts = 0;
    for(int i=1; i<n+1; i++) {
        t = i;
        ts = 0;
        while(t > 0) {
            ts += t % 10;
            t /= 10;
        }
        if (ts >= a && ts <= b) {
            sum += i;
        }
    }

    cout << sum << endl;

}