#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (1 < n && n <= 4) cout << "PRIMAR";
    else if(4 < n && n <= 9) cout <<"GIMNAZIUA";
    else if (9 < n && n <= 12)cout << "LICEU";
    return 0;
}