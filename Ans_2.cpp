#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
    
        int A,B,X,Y;
        cin>>A>>B>>X>>Y;
        
        int trades = A/X;
        int profitsPerTrade = Y-X;
        
        int total = (A+B)+(trades*profitsPerTrade);
        
        cout<<total<<"\n";
        
    }
        
}
