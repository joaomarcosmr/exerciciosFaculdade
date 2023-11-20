#include <iostream>

using namespace std;

int main()
{
    int num, soma;

    soma = 0;

    for(int i=0; i<=10; i++){
        cin >> num;
        soma += num;
        cout << i << " - " << soma << endl;
    }

    return 0;
}
