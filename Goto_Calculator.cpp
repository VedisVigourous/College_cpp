#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int choice; 
    
    cout<<"Welcome to my calculator!\n";
    cout<<"Choose 1: Addition\n";
    cout<<"Choose 2: Substraction\n";
    cout<<"Choose 3: Multiplication\n";
    cout<<"Choose 4: Division\n";
    cout<<"Enter Your Choice: \n";
    cin>>choice;
    
    int num1 , num2;
    
    cout<<"Enter Num1: \n";
    cin>>num1;
    cout<<"Enter Num2: \n";
    cin>>num2;
    
    if (choice == 1){
        goto Add;
    }
    else if (choice == 2){
        goto Sub;
    }
    else if (choice == 3){
        goto Mul;
    }
    else if (choice == 4){
        goto Div;
    }
    else {
        cout<<"Enter Valid choice";
    }
    
    int add , sub , mul , divi;
    
    Add:
    add = num1+num2;
    cout<<"Value is: "<<add;
    return 0;
    
    Sub:
    sub = num1-num2;
        cout<<"Value is: "<<sub;
        return 0;
    
    Mul:
    mul = num1*num2;
        cout<<"Value is: "<<mul;
        return 0;
    
    Div:
    divi = num1/num2;
        cout<<"Value is: "<<divi;
        return 0;


    return 0;
    
}
