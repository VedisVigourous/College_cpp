#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Write a program using logical && and logical || in C++
    
    int num1 , num2 , solution_or , solution_and;
    
    cin>>num1>>num2;
    solution_and = num1 && num2;
    cout<<endl<<"The value of logical AND: "<< solution_and;
    
    solution_or = num1 || num2;
    cout<<endl<<"The value of logical OR: "<< solution_or;
    
    return 0;
}
