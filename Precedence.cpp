#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    
    /* Precedence order is: '^' -> '/' -> '*' -> '+' -> '-' */
    
    int num1 , num2 , num3 , num4 , num5 , num6;
    cin>>num1>>num2>>num3>>num4>>num5>>num6;
    
    cout<<"Value of Eqn is: "<< (num1 + pow(num2,num3) - num4 * num5 / num6);
    return 0;
}
