//factorial of a number entered by the user

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter your number:";
    cin >> n;

    int fact=1;
    if(n<0){
        cout<<"Enter a positive number";
    }
    else{
        for(int i=n;i>0; i--) {
            fact=fact*i;
        }
        cout<<fact;
    }

    
   

}