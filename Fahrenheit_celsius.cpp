#include <bits/stdc++.h>
using namespace std;

int main() {
    float fahrenheit , celsius;
    
    cout<<"Enter Your Temperature in Farhenheit: "<<endl;
    cin>>fahrenheit;
    
    celsius = (((fahrenheit-32)*5)/9);
    cout<<"Temperature after converting to Farhenheit is: "<<celsius;
    return 0;
}
