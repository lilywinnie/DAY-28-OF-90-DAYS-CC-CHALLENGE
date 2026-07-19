#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
    
        int x, y;
        cin >> x >> y;
        
        if (x >= y) {
            cout << 0 << endl;
        } else {
            int diff = y - x;
            cout << (diff + 7) / 8 << endl;
        }
    }
    
    return 0;
}
