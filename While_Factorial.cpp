#include <bits/stdc++.h>
using namespace std;

int main() {
	// Factorial finding using while loop
	
	int factorial , number;
	
	cout<<"Enter the number you want to find the factorial of: ";
	cin>>number;
	
	cout<<endl;
	
	factorial = 1;
	
	cout<<"Factorial of "<<number<<" is: ";
	
	while(number>=1){
	    factorial = factorial*number;
	    number--;
	}
	
	cout<<factorial;
	
	return 0;

}
