#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int arr[20], n;
      cout << "introduceti marimea tabelului; "; cin >> n; // numarul de elemente
      for (int i=0; i<=n - 1 ; i++){
        cout << "\nInsert data in cell nr " << i << ": = ";
        cin >> arr[i];
      }
      for (int i=0; i<=n - 1; i++){
        cout << arr[i];
      }




      
    return 0;
}
