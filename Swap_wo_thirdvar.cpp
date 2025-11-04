#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 25 , b = 30;
    
    
    cout<<"a before swapping: "<<a<<endl;
    cout<<"b before swapping: "<<b<<endl;
    a = (a+b); // a = 55
    b = (a-b);  // b = 55 - 30 = 25
    a = (a-b); // a = 55 - 25 = 30
    
    cout<<"a after swapping: "<<a<<endl;
    cout<<"b after swapping: "<<b<<endl;
}
