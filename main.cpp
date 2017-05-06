
#include <afxres.h>
#include "menuPrincipal.h"

int teste(string a) {
    if (a == "A" || a == "a") {
        //cout << "Verdadeiro " << endl;
        return 1;

    } else if (a == "02" || a == "2")
        return 2;
}

int main() {
    SetConsoleOutputCP(65001);
    //system("color A");
    string opcao;
    int res;
    while (1 == 1) {
        cout << "Digite uma opção:  ";
        cin >> opcao;
        cout << menuPrincipal().retornaNumeroOpcao(opcao);
        system("pause");
        opcao = "";
        system("cls");
    }

    return 0;
}