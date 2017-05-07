//
// Created by Jean Freitas on 07/05/2017.
//

#include "CMenu.h"

using namespace std;

void CMenu::showMenu() {
    //SetConsoleOutputCP(65001);
    system("color A");
    cout << "|===============================================|" << endl;
    cout << "| DIGITE O NUMERO DE UMA OPCAO PARA INICIAR\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "| 01) FINANCEIRO\t| 09) PULVERIZA\t\t|" << endl;
    cout << "| 02) ALMOXAR\t\t| 10) SPED\t\t|" << endl;
    cout << "| 03) SEMENTES\t\t| 11) NFE\t\t|" << endl;
    cout << "| 04) GRAOS\t\t| 12) SIGA\t\t|" << endl;
    cout << "| 05) COMPRAS\t\t| 13) TRANSMISSAO\t|" << endl;
    cout << "| 06) FISCAL\t\t| 14) SGL\t\t|" << endl;
    cout << "| 07) ALGODAO\t\t| 15) TRANSMITE\t\t|" << endl;
    cout << "| 08) PATRIMONIO\t| 16) RECEBE\t\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << "| A) INSTALAR MOSAYCO\t\t\t\t|" << endl;
    cout << "| B) OPCOES WINDOWS\t\t\t\t|" << endl;
    cout << "| C) OPCOES ORACLE\t\t\t\t|" << endl;
    cout << "| F) CENTRAL DE TESTES\t\t\t\t|" << endl;
    cout << "| X) SAIR\t\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << " Opcao a ser executada:  ";
}