#include <iostream>
using namespace std;
int main(){
    int n , m , j , i, k = 0;
    cin >> n >> m;
    int arr[n][m];

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            k = k + 1;
            arr[i][j] = k;
        }
    }


    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
           cout << arr[i][j] << " ";
        }
    cout << "\n";
    }
}