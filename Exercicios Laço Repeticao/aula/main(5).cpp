#include <iostream>

using namespace std;

int main()
{
    int num1=1, num2=1;

    do{
        cin >> num1;
        cin >> num2;
        cout << "Seu numero digitado eh: " << num1 << " e " << num2 << endl;
        if (num1 > num2){
            cout << "o maior numero digitado eh: " << num1 << " e o menor eh " << num2 << endl;
        } else if (num2 > num1) {
            cout << "o maior numero digitado eh: " << num2 << " e o menor eh " << num1 << endl;
        } else {
            cout << "os numeros sao iguais" << endl;
        }
    }while(num1 > 0);


    return 0;
}
