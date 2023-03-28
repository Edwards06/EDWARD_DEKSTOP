#include <iostream>
#include <cmath>
using namespace std;

int concat(int a, int b) {
    //Completează funcția aici
    int nr = 0,s, d;
    d = b;
    while(b != 0){
        nr++;
    	b = b / 10; 
    }
    s = pow(10,nr);
    return a * s + d;
}

int main() //Nu modifica liniile de mai jos!
{
    int a, b;
    cin >> a >> b;
    cout << concat(a, b);
    return 0;
}