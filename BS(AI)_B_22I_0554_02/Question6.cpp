#include <iostream>
using namespace std;
int main() {
int num;


cout<<"This program is to check whether the given number is powwe of 2 or not\n\n";
	
	cout<<"Enter the number\n";
	cin>>num;
	
        if (((num)&(num-1))==0) {
        cout<<"Entered number is the power of 2\n\nThankyou for using this (:\n";
        }
        
        else {
        cout<<"Entered number is not a power of 2\n\nThankyou for using this (:\n";
        }
         

return 0;
}
