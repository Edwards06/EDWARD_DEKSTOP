#include <iostream>
using namespace std;
    int main(){
        unsigned long long int a, b;
        cin >> a;
        cin >> b;
        if( a >= 0 && b >= 0){
            cout << a + b ;
        }
        else {cout << "Error program";}
    }