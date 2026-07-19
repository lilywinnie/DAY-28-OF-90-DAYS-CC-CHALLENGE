#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
    
        int x, y, z;
        cin >> x >> y >> z;
     
        int travel_time = y / x;
        int delay = z - travel_time;
        
        if (delay < 0) 
            cout << 0 << endl;
        else 
            cout << delay << endl;
           
    }    
}
