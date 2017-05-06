//
// Created by henri on 05/05/2017.
//

#ifndef MOSAYCO_INSTALL_MENUPRINCIPAL_H
#define MOSAYCO_INSTALL_MENUPRINCIPAL_H

#include <cstdlib>
#include <iostream>

using namespace std;

class menuPrincipal {

private:
    int show = 1;
    string opcao;
    int modulo;
    string instalar = "A";
    string windows = "B";
    string oracle = "C";
    string testes = "D";
    string sair = "X";

public:
    void mostrarMenu() {
        while (show == 1) {
            system("cls");
            menuOpcaoPrincipal();
            cin >> opcao;
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

    void menuOpcaoPrincipal() {
        cout <<
             "|===============================================|\n"
                     "| DIGITE O NÚMERO DE UMA OPCÃO PARA INICIAR\t|\n"
                     "|===============================================|\n"
                     "|\t\t\t\t\t\t|\n"
                     "| 01) FINANCEIRO\t| 09) PULVERIZA\t\t|\n"
                     "| 02) ALMOXAR\t\t| 10) SPED\t\t|\n"
                     "| 03) SEMENTES\t\t| 11) NFE\t\t|\n"
                     "| 04) GRAOS\t\t| 12) SIGA\t\t|\n"
                     "| 05) COMPRAS\t\t| 13) TRANSMISSAO\t|\n"
                     "| 06) FISCAL\t\t| 14) SGL\t\t|\n"
                     "| 07) ALGODAO\t\t| 15) TRANSMITE\t\t|\n"
                     "| 08) PATRIMONIO\t| 16) RECEBE\t\t|\n"
                     "|\t\t\t\t\t\t|\n"
                     "|===============================================|\n"
                     "| A) INSTALAR MOSAYCO\t\t\t\t|\n"
                     "| B) OPCOES WINDOWS\t\t\t\t|\n"
                     "| C) OPCOES ORACLE\t\t\t\t|\n"
                     "| F) CENTRAL DE TESTES\t\t\t\t|\n"
                     "| X) SAIR\t\t\t\t\t|\n"
                     "|===============================================|\n"
                     " Opção a ser executada:  "
             << endl;
    }

    void menuOpcao_A() {
        cout <<
             "|===============================================================================================|\n"
                     "| A) INSTALAR MOSAYCO\t\t\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|\n"
                     "|\t\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 1) CRIAR DIRETÓRIOS - SISTEMA\t\t\t\t\t\t\t\t\t|\n"
                     "| 2) CRIAR DIRETÓRIOS - USUARIOS\t\t\t\t\t\t\t\t|\n"
                     "| 3) BAIXAR INSTALADORES\t\t\t\t\t\t\t\t\t|\n"
                     "| 4) EXECUTAR INSTALADORES\t\t\t\t\t\t\t\t\t|\n"
                     "| 5) ADICIONAR PERMISSOES\t\t\t\t\t\t\t\t\t|\n"
                     "| 6) CONFIGURAR ODBC\t\t\t\t\t\t\t\t\t\t|\n"
                     "|\t\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|\n"
                     "| V ) VOLTAR\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| M ) MENU PRINCIPAL\t\t\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|"
             <<
             endl;
    }

    void menuOpcao_A_3() {
        cout <<
             "|===============================================================================================|\n"
                     "| A) -> 3) BAIXAR INSTALADORES\t\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|\n"
                     "|\t\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 1) ORACLEXE\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 2) BDE 32 BITS\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 3) BDE 64 BITS\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 4) DLLS\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 5) DOSPRINT\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 6) ATUALIZADOR BATCH\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 7) CUTEPDF\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 8) PLSQL\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 9) APP ORA28000\t\t\t\t\t\t\t\t\t\t|\n"
                     "|\t\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|\n"
                     "| V ) VOLTAR\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| M ) MENU PRINCIPAL\t\t\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|"
             <<
             endl;
    }

    void menuOpcao_A_4() {
        cout <<
             "|===============================================================================================|\n"
                     "| A) -> 4) EXECUTAR INSTALADORES\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|\n"
                     "|\t\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 1) ORACLEXE\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 2) BDE 32 BITS\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 3) BDE 64 BITS\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 4) DLLS\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 5) DOSPRINT\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 6) ATUALIZADOR BATCH\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 7) CUTEPDF\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 8) PLSQL\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| 9) APP ORA28000\t\t\t\t\t\t\t\t\t\t|\n"
                     "|\t\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|\n"
                     "| V ) VOLTAR\t\t\t\t\t\t\t\t\t\t\t|\n"
                     "| M ) MENU PRINCIPAL\t\t\t\t\t\t\t\t\t\t|\n"
                     "|===============================================================================================|"
             <<
             endl;
    }

    void verificaModulos(int n) {
        switch (n) {
            case 1:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 2:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 3:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 4:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 5:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 6:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 7:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 8:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 9:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 10:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 11 :
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 12:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 13:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 14:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 15:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 16:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 17:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 18:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 19:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            case 20:
                cout << " escolhido 1" << endl;
                system("pause");
                break;
            default:
                cout << "Default" << endl;
                break;
        }
    }
};

#endif //MOSAYCO_INSTALL_MENUPRINCIPAL_H