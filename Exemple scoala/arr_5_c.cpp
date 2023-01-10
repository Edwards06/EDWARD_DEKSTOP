#include <iostream>
using namespace std;
int main(){
    int v[100], x, n, m = 0;
    // cout << "să se mute la sfârșitul vectorului zerourile fără a schimba ordinea elementelor nenule: "; cin >> x;
    cout << "Introduceti marimea lui array: "; cin >> n;
    cout << "Introduceti elementele araiului: \n";
    for (int i = 0; i < n; i++){
        cout <<"Elementul de pe pozitia " << i << ": "; cin >> v[i];
        cout << "\n";
    }
    cout << "Afisarea elementelor: ";
    for (int i = 0; i < n; i++){
        if (v[i] == 0){m++;
        }
        else{cout << v[i] << " ";}
    }
    for (int i=0; i <= m - 1; i++){
        cout << "0" << " ";
    }

}