#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char sir_1[50], sir_2[50];
    cin >> sir_1 >> sir_2;
    strncat(sir_2, sir_1, 3);
    cout << sir_1;   
}