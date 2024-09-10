#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter your number:";
    cin >> n;

    int table;
    for(int i=1; i<=10; i++){
        table =n*i;
        cout << n <<" x "<<i<<" = "<<table << endl;
        
    }
    
        
}
