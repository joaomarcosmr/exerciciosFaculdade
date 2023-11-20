#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int base, expoente;
    cout << "digite dois numeros inteiros e positivos" << endl;
    cin >> base;
    cin >> expoente;

    if (base > 0 && expoente > 0){
        for(int i=1;i < expoente+1;i++){
            cout << base << "^" << i << " = " << pow(base,i)<< endl;
        }
    }

    return 0;
}
