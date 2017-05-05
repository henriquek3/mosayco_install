//
// Created by henri on 05/05/2017.
//

#ifndef MOSAYCO_INSTALL_MENUPRINCIPAL_H
#define MOSAYCO_INSTALL_MENUPRINCIPAL_H


#include <cstdlib>
#include <iostream>


using namespace std;

class menuPrincipal {
public:
    int opcao;

    void mostrarMenu() {
        while (1 == 1) {
            system("cls");
            system("color A");
            menuOpcoes();
            system("pause");
            exit(0);
        }
    }

    void menuOpcoes() {
        cout << "|===============================|\n"
                "| Digite uma opção para iniciar |\n"
                "|===============================|\n"
                "|\t\t\t\t|\n"
                "| 01) FINANCEIRO\t\t|\n"
                "| 02) ALMOXAR\t\t\t|\n"
                "| 03) SEMENTES\t\t\t|\n"
                "| 04) GRAOS\t\t\t|\n"
                "| 05) COMPRAS\t\t\t|\n"
                "| 06) FISCAL\t\t\t|\n"
                "| 07) ALGODAO\t\t\t|\n"
                "| 08) PATRIMONIO\t\t|\n"
                "| 09) PULVERIZA\t\t\t|\n"
                "| 10) SPED\t\t\t|\n"
                "| 11) NFE\t\t\t|\n"
                "| 12) SIGA\t\t\t|\n"
                "| 13) TRANSMISSAO\t\t|\n"
                "| 14) SGL\t\t\t|\n"
                "| 15) TRANSMITE\t\t\t|\n"
                "| 16) RECEBE\t\t\t|\n"
                "|\t\t\t\t|\n"
                "|===============================|\n"
                "| A) INSTALAR MOSAYCO\t\t|\n"
                "| B) OPCOES WINDOWS\t\t|\n"
                "| C) OPCOES ORACLE\t\t|\n"
                "| F) CENTRAL DE TESTES\t\t|\n"
                "| X) SAIR\t\t\t|\n"
                "|===============================|" << endl;
    }

};


#endif //MOSAYCO_INSTALL_MENUPRINCIPAL_H
