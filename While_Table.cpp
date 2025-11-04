#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int num_in;
	int sno=1;
	
	cout<<"Enter Num: ";
	cin>>num_in;
	
	cout<<endl;
	
	cout<<"Table:"<<endl; 
	 
	while (sno<=10){
	    cout<<num_in<<" x "<<sno<<" = "<<num_in*sno<<endl;
	    sno++;
	}
	return 0;
}
