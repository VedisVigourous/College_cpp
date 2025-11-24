#include <bits/stdc++.h>
using namespace std;

long sumofdigit(long number){
    long d , sum = 0;
    while (number!=0){ 
        d = number % 10; // extracts the digit
        sum += d; // sum updation
        number = number / 10; // removing the last digit of the number.
    }
    
    return sum;
}

int main() {
	// your code goes here
    long num;
    cout<<"Enter your desired number: ";
    cin>>num;
    cout<<endl;
    
    cout<<"Sum of Digits is: "<<sumofdigit(num);
}
