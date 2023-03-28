#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream fin("fisiere.in");
    ofstream gout("fisiere.out");
    int n;
    fin >> n;
    gout << n;  
    fin.close(); gout.close();
} 