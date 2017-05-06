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
            verificaModulos(retornaNumeroOpcao(opcao));
            system("pause");
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
        cout << "|===============================================|" << endl;
        cout << "| DIGITE O NÚMERO DE UMA OPCÃO PARA INICIAR\t|" << endl;
        cout << "|===============================================|" << endl;
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
        cout << " Opção a ser executada:  ";
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
            case 0:
                cout << "Nos vemos em breve, ate mais!" << endl;
                system("pause");
                exit(0);
            case 1:
                cout << "Verificação 01" << endl;
                break;
            case 2:
                cout << "Verificação 02" << endl;
                break;
            case 99:
                cout << "Verificação 99" << endl;
                break;
            default:
                cout << "Digite uma opcao valida!" << endl;
                system("pause");
        }
    }

    int retornaNumeroOpcao(string arg) {
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
};

#endif //MOSAYCO_INSTALL_MENUPRINCIPAL_H