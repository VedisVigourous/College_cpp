#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Following codes calculate values in binary and not in integers 
    
    int x,y,z;
    cin>>x>>y; // & denotes - AND Gate  
    z = x & y; // 2 = 10 and 3 = 11 = 10 * 11 = 10
    cout<<endl<<"The value of X & Y: "<<z;
    
    int a , b ,c;
    cin>>a>>b; // & denotes - OR Gate
    c = a | b; // 4 = 100 or 3 = 011 = 111 = 7  
    cout<<endl<<"The value of a | b is: "<<c;
    
    int t1 , t2;
    cin>>t1; // Not equal to in binary
    t2 =! t1;
    cout<<endl<<"The value of NOT operator: "<<t2;
    
    return 0;
}
