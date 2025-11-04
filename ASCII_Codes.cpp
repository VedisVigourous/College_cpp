#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char start = 33;
	int sno = 33;
	
	cout<<"Ascii :: Character"<<endl;
	do {
	    cout<<"   "<<sno<<" :: "<<start<<endl;
	    sno++;
	    start++;
	} while (sno<=126);
	
	return 0;

}
