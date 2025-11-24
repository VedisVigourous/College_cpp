#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	vector<int>numbers;
	int num;
	for (int i = 0 ; i<=9 ; i++){
	    cout<<"Enter number "<<i<<": ";
	    cin>>num;
	    numbers.push_back(num);
	    cout<<endl;
	}
	
	// Aditional elements: 
	numbers.push_back(15);
	numbers.push_back(12);
	numbers.push_back(13);
	numbers.push_back(88);
	
	cout<<"Elements in the Vectors are: "<<endl;
	cout<<": ";
	
	for (int elements : numbers){
	    cout<<elements<<" : ";
	}
	
	cout<<endl;
	cout<<"************"<<endl;
	
	// Erasing an element at specific index
	numbers.erase(numbers.begin() + 5);
	
	cout<<"Updated elements in the Vectors are: "<<endl;
	cout<<": ";
	
	for (int elements : numbers){
	    cout<<elements<<" : ";
	}
	
	cout<<endl;
	cout<<"************"<<endl;
	
	// Popping an element at last index
	numbers.pop_back();
	
	cout<<"Updated elements in the Vectors are: "<<endl;
	cout<<": ";
	
	for (int elements : numbers){
	    cout<<elements<<" : ";
	}
	
	cout<<endl;
	cout<<"************"<<endl;
	
	// Sorting a vector
	sort(numbers.begin() , numbers.end());
	
	cout<<"Sorted elements in the Vectors are: "<<endl;
	cout<<": ";
	
	for (int elements : numbers){
	    cout<<elements<<" : ";
	}
	
	cout<<endl<<endl;
	cout<<"*********";
	cout<<endl<<endl;
	
	cout<<"No of Elements in the Vector: "<<numbers.size();
	
	
	return 0;

}
