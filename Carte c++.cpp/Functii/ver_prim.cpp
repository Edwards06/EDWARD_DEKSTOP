#include <iostream>

using namespace std;

int este_prim(int n) {
    //Completează funcția aici
    int plus = 0;
    for (int i = 1; i <= n; i++){
    	if(n % i == 0){plus++;}
    }
    if (plus == 2){return 1;}
    else {return 0;}
}



int main() //Nu modifica liniile de mai jos!
{
    int n;
    cin >> n;
    cout << este_prim(n);
    return 0;
}