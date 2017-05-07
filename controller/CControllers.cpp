//
// Created by Jean Freitas on 07/05/2017.
//
#include "CControllers.h"

int CControllers::retornaCodigoMenu(string arg) {
    if (arg == "01" || arg == "1") {
        return 1;
    } else if (arg == "02" || arg == "2") {
        return 2;
    } else if (arg == "03" || arg == "3") {
        return 3;
    } else if (arg == "04" || arg == "4") {
        return 4;
    } else if (arg == "05" || arg == "5") {
        return 5;
    } else if (arg == "06" || arg == "6") {
        return 6;
    } else if (arg == "07" || arg == "7") {
        return 7;
    } else if (arg == "08" || arg == "8") {
        return 8;
    } else if (arg == "09" || arg == "9") {
        return 9;
    } else if (arg == "10") {
        return 10;
    } else if (arg == "11") {
        return 11;
    } else if (arg == "12") {
        return 12;
    } else if (arg == "13") {
        return 13;
    } else if (arg == "14") {
        return 14;
    } else if (arg == "15") {
        return 15;
    } else if (arg == "16") {
        return 16;
    } else if (arg == "A" || arg == "a") {
        return 17;
    } else if (arg == "B" || arg == "b") {
        return 18;
    } else if (arg == "C" || arg == "c") {
        return 19;
    } else if (arg == "D" || arg == "d") {
        return 20;
    } else if (arg == "X" || arg == "x") {
        return 21;
    }
    return 99;
}

void CControllers::renderViewMenu(int n) {
    switch (n) {
        case 21:
            cout << "Nos vemos em breve, ate mais!" << endl;
            system("pause");
            exit(0);
        case 1:
            cout << "Verificação 01" << endl;
            system("pause");
            break;
        case 2:
            cout << "Verificação 02" << endl;
            break;
        case 17:

        case 99:
            cout << "Digite uma opcão válida!" << endl;
            break;
        default:
            cout << "Digite uma opcão dentre as mostradas acima!" << endl;
    }
}

string CControllers::getCodMenu() {
    string menu;
    cout << " Opcao a ser executada:  ";
    cin >> menu;
    return menu;
}
