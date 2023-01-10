#include <iostream>
using namespace std;
int main(){
    int v[100], x, n;
    cout << "Introduceti valoarea indexul lui x: "; cin >> x;
    cout << "Introduceti marimea lui array: "; cin >> n;
    cout << "Introduceti elementele araiului: \n";
    for (int i = 0; i < n; i++){
        cout <<"Elementul de pe pozitia " << i << ": "; cin >> v[i];
        cout << "\n";
    }
    cout << "Elementul fara indexul x es: ";
    for (int i = 0; i < n; i++){
        if (i != x ){
            cout << v[i] << " ";
        }
    }


}