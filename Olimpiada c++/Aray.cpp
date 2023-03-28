#include <iostream>
using namespace std;
int main(){
    int n, i, j, sum = 0;
    cin >> n;
    int arr[n][n];
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n ; j++){
            cout << "Itroduceti datele in celulele " << i << ", " << j << ":=  ";
            cin >> arr[i][j];
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            cout << arr[i][j];
        }
    cout << "\n";
    }
    cout << "Element from diagonal principal: ";
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if(i == j){
                cout << arr[i][j] << ", ";
                sum += arr[i][j];
            }
        }
    }
    cout << "\nSuma este egala cu: " << sum;
}