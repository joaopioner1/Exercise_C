#include <bits/stdc++.h>

using namespace std;

int main()
{
    int input;
    
    cout <<"Insira um numero: ";
    cin >> input;
    
    switch (input) {
        case 1 : 
            cout << "segunda-feira" << endl;
            break;
        case 2 :
            cout << "terca-feira" << endl;
            break;
        case 3 : 
            cout << "quarta-feira" << endl;
            break;
        case 4 :
            cout << "quinta-feira" << endl;
            break;
        case 5 :
            cout << "sexta-feira" << endl;
            break;
        case 6 : 
            cout << "sabado" << endl;
            break;
        case 7 : 
            cout << "domingo" << endl;
            break;
        default : 
            cout << "nao eh um dia valido" << endl;
    }
    return 0;
}

