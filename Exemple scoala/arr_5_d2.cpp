#include <iostream>
using namespace std;
int main(){
    int v[100], n; 
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "arr de " << i << " :"; cin >> v[i];
    }
    cout << "Afisarea elementelor cu exceptia celor pare: ";

    for (int i = 0; i < n; i++){
        if(v[i] % 2 != 1){
            cout << v[i] << " ";
        }
        
    }



}