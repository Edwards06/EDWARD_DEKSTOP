#include <iostream>
using namespace std;
int main(){
    int v[100], x, n;
    cout << "Introduceti valoarea lui x: "; cin >> x;
    cout << "Introduceti marimea lui array: "; cin >> n;
    cout << "Introduceti elementele araiului: \n";
    for (int i = 0; i < n; i++){
        cout <<"Elementul de pe pozitia " << i << ": "; cin >> v[i];
        cout << "\n";
    }
    cout << "Elementel fara x sunt: ";
    for (int i = 0; i < n; i++){
        if (v[i] != x ){
            cout << v[i] << " ";
        }
    }


}