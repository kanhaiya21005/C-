#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your nunber:";
    cin >> n;
    int p=n;
    int cubesum = 0;

    while(p>0) {
        int lastdig = p%10;
        cubesum += lastdig * lastdig * lastdig;
        p /= 10;
    }

    if (n == cubesum) {
        cout << "Armstrong number";
    } else {
        cout <<"NOT an armstrong number";
    }

     

}

