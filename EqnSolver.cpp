#include <bits/stdc++.h>
using namespace std;

int main() {
	int b , a , c , root1 , root2 , eqn_1;
	cin >> b >> a >> c;
	eqn_1 = b*b - 4*a*c;
	
	root1 = (-b + sqrt(eqn_1))/2*a;
    root2 = (-b - sqrt(eqn_1))/2*a;	
	
	cout << "Root 1: " << root1<<endl;
	cout << "Root 2: " << root2;
	

}
