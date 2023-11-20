#include <iostream>

using namespace std;

int main()
{
    int i = 1;

    for(i=1; i < 11; i++){
            for(int multiplicador=1; multiplicador < 11; multiplicador++){
                cout << i << " x " << multiplicador << " = " << i*multiplicador << endl;
            }
        cout << endl;
    }
    return 0;
}
