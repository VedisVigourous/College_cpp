#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int BS , DA , HRA , TA , age , experience;
	BS = 12000;
	
	string name;

	cout<<"Enter your Name:"<<endl;
	cin>>name;
	
	cout<<"Enter your Age:"<<endl;
	cin>>age;
	
	cout<<"Enter your Experience: "<<endl;
	cin>>experience;
	
		
	if ((experience < 3) && (age>=20)){
	    DA = 0.01 * BS;
	    HRA = 0.10 * BS;
	    TA = 0.05 * BS;
	}
	
	else if ((experience< 5) && (experience>3) && (age < 35) && (age>=20)){
	    DA = 0.02 * BS;
	    HRA = 0.15 * BS;
	    TA = 0.07 * BS;	    
	}
	
	else if ((experience>=5) && (age>=35)){
	    DA = 0.05 * BS;
	    HRA = 0.20 * BS;
	    TA = 0.09 * BS;
	}
	
	else if(age<20){
	    cout<<"Not Applicable for Job";
	}
	
	BS = DA + TA + HRA;
	cout<<"Basic Salary is: "<<BS;
	
	return 0;
}
