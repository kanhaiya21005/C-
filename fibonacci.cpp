#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your nunber:";
    cin >> n;

    int first = 0;
    int sec = 1;
    cout << first <<" " << sec <<" ";

    for(int i = 2; i<n; i++){
        int third = first + sec;
        cout << third <<" ";

        first = sec;
        sec = third;
    }
}    
