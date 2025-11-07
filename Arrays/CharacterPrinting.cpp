#include <bits/stdc++.h>
using namespace std;

int main() {
    char arr[14];
    int index = 0;
    
    for (char ascii = 65; ascii<=78 ; ascii++){
        arr[index] = ascii;
        cout<<arr[index]<<" ";
        index++;
    }
    
    /*
    
    for (int element=0; element<=13 ; element++){
        cout<<arr[element]<<" ";
    }
	
	*/
	
	return 0;
}