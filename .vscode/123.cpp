#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      
      int n;
      cin >> n; // numarul de elemente
      int arr[n];
      for (int i = 0; i <= n -1; i++){
          cin >> arr[i];
      }
      for (int i = n; i >= 1; i--){
          cout << arr[i - 1] << " ";
      }
    return 0;
}
