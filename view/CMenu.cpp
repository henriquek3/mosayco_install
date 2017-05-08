//
// Created by Jean Freitas on 07/05/2017.
//

#include <cstdio>
#include "CMenu.h"

void CMenu::showMenu() {
    system("cls");
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

void CMenu::renderViewMenu(int n) {
    switch (n) {
        case 1:
            bool valor;
            valor = fopen("c:\\unisystem\\executaveis\\financeiro.exe", "r");
            if (valor == true) {
                system("c:\\unisystem\\executaveis\\financeiro.exe");
            } else
                cout << "Modulo Financeiro nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            setValor(getCodMenu());
            setCodigo(retornaCodigoMenu(getValor()));
            renderViewMenu(getCodigo());
            break;
        case 2:
            valor = fopen("c:\\unisystem\\executaveis\\almoxar.exe", "r");
            if (valor == true) {
                system("c:\\unisystem\\executaveis\\almoxar.exe");
            } else
                cout << "Modulo Financeiro nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            setValor(getCodMenu());
            setCodigo(retornaCodigoMenu(getValor()));
            renderViewMenu(getCodigo());
            break;
        case 17:
            showMenuInstalarMosayco();
            setValor(getCodMenu());
            setCodigo(retornaCodigoMenu(getValor()));
            renderViewMenu(getCodigo());
            break;
        case 21:
            showMenu();
            CMenu::valor = getCodMenu();
            CMenu::codigo = retornaCodigoMenu(CMenu::valor);
            renderViewMenu(CMenu::codigo);
            break;
        case 23:
            cout << "Nos vemos em breve, ate mais!" << endl;
            exit(0);
        case 99:
            cout << "Digite uma opcao valida!" << endl;
            break;
        default:
            cout << "Digite uma opcao dentre as mostradas acima!" << endl;
    }
}

string CMenu::getCodMenu() {
    string menu;
    cout << " Opcao a ser executada:  ";
    cin >> menu;
    return menu;
}

int CMenu::retornaCodigoMenu(string arg) {
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
    } else if (arg == "M" || arg == "m") {
        return 21;
    } else if (arg == "V" || arg == "v") {
        return 22;
    } else if (arg == "X" || arg == "x") {
        return 23;
    }
    return 99;
}

void CMenu::setValor(string valor) { this->valor = valor; }

string CMenu::getValor() { return this->valor; }

void CMenu::setCodigo(int codigo) { this->codigo = codigo; }

int CMenu::getCodigo() { return this->codigo; }
