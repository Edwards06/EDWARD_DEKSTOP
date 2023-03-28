#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int x, a, b;
    int size = v.size();
    cin >> size;
    v.resize(size);
    for(auto i = 0; i < size; i++){
        cin >> v[i];
    }
    
    cin >> x;
    v.erase(v.begin() + x);
    cin >> a >> b;
    v.erase(v.begin() + a,v.begin() + b);
    
    for(auto i = 0; i < size; i++){
        cout << v[i] << " ";
    }
    
    return 0;
}
