#include <iostream>
using namespace std;
int main(){
    int arr [50][50];
    int i, j, ori, ver;
    cout<<"Introducem dimensiunile matricii: "; cin >> ori >> ver;
    for(i = 0; i < ori; i++){
        for(j = 0; j < ver; j++){
            cin >> arr[i][j];
        }
        
    }

    //Afisarea tabelei
    for(i = 0; i < ori; i++){
        for(j = 0; j < ver; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    //Afisarea diagonalei principale
    cout << "\n";
    for(i = 0; i < ori; i++){
        for(j = 0; j < ver; j++){
            if(i == j){
                cout << arr[i][j] << " ";
            }   
        }
    }

    cout << "\n";

    for(i = 0; i < ori; i++){
        for(j = 0; j + 1 < ver; j++){
            cout << arr[i][j] << " ";
        }
    }
}