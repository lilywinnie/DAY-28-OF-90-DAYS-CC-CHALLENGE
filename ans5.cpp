#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int t;
    cin >> t;
  
    while (t--) {
     
        int x, y;
        cin >> x >> y;
        
        int needed_sum = 50 - x;
        int min_sum = 2 * y;
        int max_sum = 2 * y + 10;
        
        if (needed_sum >= min_sum && needed_sum <= max_sum) 
            cout << "Yes" << endl;
        
        else 
            cout << "No" << endl;
        
    }
  
    return 0;
}
