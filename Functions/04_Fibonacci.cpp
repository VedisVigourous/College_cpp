#include <bits/stdc++.h>
using namespace std;

void fibonacci(int terms){
    int ans , no1 = 0 , no2 = 1;
    int term = 2;
    
    cout<<no1<<" "<<no2<<" ";
    
    while (term < terms){
        ans = no1 + no2;
        no1 = no2;
        no2 = ans;
        cout<<ans<<" ";
        term++;
    }
}

int main() {
	// your code goes here
	cout<<"Fibonacci Series is: ";
    fibonacci(10);
}
