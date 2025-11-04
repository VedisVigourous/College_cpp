#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Write a program to find out the year is leap year or not
    
    int year;
    cin>>year;
    
    // Two condition of leap year = divisible by 4 or divisible by 100
    if ((year%4==0) && (year%100!=0)){
        cout<<"Year is a leap Year !";
    }
    else 
    cout<<"Year is not a leap year !";
    
    return 0;
}
