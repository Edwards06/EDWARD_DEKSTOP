#include <iostream>

using namespace std;

int check_cifcont(int a, int b) {
    //Completează funcția aici
    int sum1 = 0, sum2 = 0, temp = 0, sum3; 
    while(a != 0){
        temp = a % 10;
        sum1 = sum1 + temp;
    	a = a / 10;
        
    }
    
    temp = 0;
    while(a != 0){
        temp = a % 10;
        sum2 = sum2 + temp;
    	a = a / 10;
        if (sum2 == 2){
            temp = a % 10;
            sum3 = sum3 + temp;
    	    a = a / 10; 
        }
        
    }
    if(sum1 != sum2 || sum3){
        return 0;
    }
    else{return 1;}
}

int main() //Nu modifica liniile de mai jos!
{
    int a, b;
    cin >> a >> b;
    cout << check_cifcont(a, b);
    return 0;
}