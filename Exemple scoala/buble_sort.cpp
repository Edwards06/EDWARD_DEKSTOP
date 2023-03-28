#include <iostream>
using namespace std;
int main(){
     int array[10];
    int n, s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << "Array de " << i << " = "; cin >> array[i];
    }
    
     cout << "\nArray ne sortat:\n";
    cout << "[";
    for(int i = 0; i < n; i++){
        cout << " " << array[i] << " ";
    }
    cout << "]\n";

     bool status = false;
    for( int i = 0; i < n - 1; i++){
        status = false;
        for (int j = 0; j < n - i - 1; j++){
            if (array[j] > array[j + 1]){
                swap(array[j],array[j+1]);
                status = true;
            }

        }
        if (!status) break;
    }

    cout << "\nArray sortat:\n";
    cout << "[";
    for(int i = 0; i < n; i++){
        cout << " " << array[i] << " ";
    }
    cout << "]";

}