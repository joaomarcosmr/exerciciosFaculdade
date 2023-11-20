#include <iostream>

using namespace std;

int main()
{
    int contador;

    cout << "digite um numero e gerarei sua tabuada: " << endl;
    cin >> contador;
    cout << endl;

    for(int i=1; i < 11; i++){
        cout << contador << " x " << i << " = " << i*contador << endl;
    }
    return 0;
}
