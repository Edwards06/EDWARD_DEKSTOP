#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    switch (a)
    {
    case 1 ... 2:
        cout << "Iarna.";
        break; 
    case 12:
        cout << "Iarna.";
        break;
    case 3 ... 5:
        cout << "Primavara.";
        break;
    case 6 ... 8:
        cout << "Vara.";
        break;
    case 9 ... 11:
        cout << "Toamna";
        break;
    default:
        cout << "ERROR";
        break;
    }
}