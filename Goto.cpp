#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int num1 , num2, num3, calc1, calc2;
	cin>>num1>>num2>>num3;
	
	if (num1>=num2){
	    goto Block1;
	}
	else{
	    goto Block2;
	}
	
	return 0;
	
	Block1: calc1 = (num1+num2)-num3;
	cout<<"The Value is: "<<calc1<<endl;
	return calc1;
	
	Block2: calc2 = (num1-num2)+num3;
	cout<<"The Value is: "<<calc2<<endl;
	return calc2;
	

}
