#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;n>i;i++)
    {
        cin>>a[i];
    }
    for(int i=n;i>0;i--)
    {
    cout<<a[i - 1]<< " ";
}
    return 0;
}