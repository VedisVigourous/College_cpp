#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr [10];
	int element;
	
	for(int no_elem = 0; no_elem<10; no_elem++){
	    cout<<"Enter a number to add to an array: "<<endl;
	    cin>>element;
	    
	    arr[no_elem] = element;
	}

    cout<<"Elements of array are: "<<endl;
    
	for (int index = 0; index<=9; index++){
	    cout<<arr[index]<<" ";
	}
	
	return 0;

}
