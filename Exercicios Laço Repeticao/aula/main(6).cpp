#include <iostream>

using namespace std;

int main()
{
    float ze=1.1, chico=1.5;
    int anos;
    // i = anos
    for(int i=0; ze < chico; i++){
        cout << "em " << i << " anos chico tera " << chico << " e ze tera " << ze << endl;
        chico += 0.02;
        ze += 0.03;
        anos = i;
    }

    cout << "ze sera maior que chico quando passar " << anos + 1;

    return 0;
}
