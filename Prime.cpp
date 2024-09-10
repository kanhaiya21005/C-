#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "enter your number: ";
    cin >> n;
    bool isPrime = true;

    for(int i=2; i<=sqrt(n); i++) {
        if(n%i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << "number is prime" << endl;
    } else {
        cout << "number is NOT prime" << endl;
    }
    return 0;
}
