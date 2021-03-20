#include<iostream>
using namespace std;
int countDigit(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        ++count;
    }
    return count;
}
int main() {
 long long num;
 cout<<"enter the number to find the total digits:"<<endl;
 cin>>num;
 cout<<"total digits in a given number is: "<<countDigit(num)<<endl;
return 0;
}
