#include <iostream>
#include <algorithm> 
using namespace std;
int main(){
    int n , m , j , i, sum = 0, k = 0;      
    cin >> n >> m;
    int arr[n][m], ar[m];

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    

 
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            if (i < 1){
                ar[j] = arr[i][j];
            }
            // arr[n][m] = ar[n];
            swap(arr[i][j], arr[i + 1][j]);
            for(int s = 0; s < n; s++){
                if (i = n - 1){
                    arr[i][j] = ar[j];
                }
            }
        }
        
    }
    cout << "\n";
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
    cout << "\n";
    }
}