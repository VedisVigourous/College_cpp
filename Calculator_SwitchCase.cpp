#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char operation;
	cout<<"Welcome to Basic Operating Calculator:"<<endl;
	cout<<"Select the Following Initials to use operations !"<<endl;
	cout<<"A: Addition"<<endl;
	cout<<"S: Substraction"<<endl;
	cout<<"M: Multiply"<<endl;
	cout<<"D: Division"<<endl;
	
	cin>>operation;
	
	int num1 , num2;
	cout<<"Enter Number 1: "<<endl;
	cin>>num1;
	cout<<"Enter Number 2: "<<endl;
	cin>>num2;
	
	switch(operation){
	    case 'A':
	    cout<<"Sum is: "<<num1+num2;
	    break;
	    
	    case 'S':
	    cout<<"Difference is: "<<num1-num2;
	    break;
	    
	    case 'M':
	    cout<<"Product is: "<<num1*num2;
	    break;
	    
	    case 'D':
	    cout<<"Quotient is: "<<num1/num2;
	    break;
	    
	    default: 
	    cout<<"Not a valid query";
	    break;
	}
	
    return 0; 
}
