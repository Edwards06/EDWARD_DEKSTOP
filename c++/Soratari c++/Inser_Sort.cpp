#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[100];
    cin >>n;
    for(int i = 0; i < n; i++){
        cout << "Array de " << i << " = "; cin >> arr[i]; 
    }
    cout << "\n";
    for(int i = 1; i < n; i++){
        int k = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            arr[j] = k;
            j--;
        }
        
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}