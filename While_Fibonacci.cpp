#include <bits/stdc++.h>
using namespace std;

int main() {
	// Fibonacci Sequence (1 1 2 3 5 8 13 ... )
	
	int space , initial , no1=1 , no2=1 , ans;
	
	cout<<"How many numbers do you require: ";
	cin>>space;
	
	cout<<endl;
	
	cout<<"The Fibonacci series for "<<space<<" space is: "<<endl;
	
	cout<<no1<<" "<<no2<<" ";
	
	while(initial<=space ){
	    
	    ans = no1 + no2; //updates the answer
	    no1 = no2; // assigns the next first number as : second of previous series
	    no2 = ans; // assigns the second number as : answer of previous 
	    
	    cout<<ans<<" ";
	    
	    initial++;
    }
    
    return 0;

}
