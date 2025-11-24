#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[5] = {10 , 20 , 30 , 44 , 55};
	
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	cout<<endl;
	
	int position , found = 0;
	
	for (int i = 0 ; i < 5 ; i++){
	    if (arr[i] == num){
	        position = i;
	        found = 1;
	        break;
	    }
    }
	
	if (found==1){
	    cout<<"Number found at: "<<position;
	}
    else {
	   cout<<"Number not found!";
	}

    return 0;
    
}
