#include <iostream>

using namespace std;

int main()
{
    int media=0, i=0, num;
    int resultado;
    do{
        cin >> num;
        if(num!=0){
            if(num % 2 == 0){
                media = media + num;
                i = i + 1;
            }
        }
    } while(num > 0);

    resultado = media/i;
    cout << "ate o momento o resultado eh: " << resultado << endl;

    return 0;
}
