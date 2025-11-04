#include <bits/stdc++.h>
using namespace std;

int main() {
    int num,count=0;
    cin>>num;
    cout<<"No entered: "<<num<<endl;
    do{
        num=num/10; //removes the last digit one by one
        count++; // increments the value accordingly
    }
    while(num!=0);
    cout<<"The count of digit for number::>> "<<count;
    return 0;
}
