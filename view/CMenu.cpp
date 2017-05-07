//
// Created by Jean Freitas on 07/05/2017.
//

#include "CMenu.h"

void CMenu::showMenu() {
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
}

void CMenu::showMenuInstalarMosayco() {
    system("cls");
    cout << "|===============================================|" << endl;
    cout << "| A) INSTALAR MOSAYCO\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "| 1) CRIAR DIRETORIOS - SISTEMA\t\t\t|" << endl;
    cout << "| 2) CRIAR DIRETORIOS - USUARIOS\t\t|" << endl;
    cout << "| 3) BAIXAR INSTALADORES\t\t\t|" << endl;
    cout << "| 4) EXECUTAR INSTALADORES\t\t\t|" << endl;
    cout << "| 5) ADICIONAR PERMISSOES\t\t\t|" << endl;
    cout << "| 6) CONFIGURAR ODBC\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << "| V) VOLTAR\t\t\t\t\t|" << endl;
    cout << "| M) MENU PRINCIPAL\t\t\t\t|" << endl;
    cout << "| X) SAIR\t\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << " Opcao a ser executada:  ";
}

void CMenu::showMenuInstalarMosayco_Baixar() {
    cout << "|===============================================|" << endl;
    cout << "| A) -> 3) BAIXAR INSTALADORES\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "| 1) ORACLEXE\t\t\t\t\t|" << endl;
    cout << "| 2) BDE 32 BITS\t\t\t\t|" << endl;
    cout << "| 3) BDE 64 BITS\t\t\t\t|" << endl;
    cout << "| 4) DLLS\t\t\t\t\t|" << endl;
    cout << "| 5) DOSPRINT\t\t\t\t\t|" << endl;
    cout << "| 6) ATUALIZADOR BATCH\t\t\t\t|" << endl;
    cout << "| 7) CUTEPDF\t\t\t\t\t|" << endl;
    cout << "| 8) PLSQL\t\t\t\t\t|" << endl;
    cout << "| 9) APP ORA28000\t\t\t\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << "| V) VOLTAR\t\t\t\t\t|" << endl;
    cout << "| M) MENU PRINCIPAL\t\t\t\t|" << endl;
    cout << "| X) SAIR\t\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
}

