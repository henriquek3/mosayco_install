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
    setValor(getCodMenu()); // @todo pergunta a opcao e salva na variavel valor
    setCodigo(retornaCodigoMenu(getValor())); //@todo obtem valor e repassa para retornar o codigo do menu
    renderViewMenu(getCodigo()); // @todo passa o codigo para a funcao que renderiza os menus*/
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
    setValor(getCodMenu());
    setCodigo(retornaCodigoMenu(getValor()));
    renderViewMenu(getCodigo());
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
    setValor(getCodMenu());
    setCodigo(retornaCodigoMenu(getValor()));
    renderViewMenu(getCodigo());
}

void CMenu::showMenuOpcoesOracle() {
    cout << "|===============================================|" << endl;
    cout << "| B) OPCOES ORACLE\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "| 48) CRIAR USUARIO\t\t\t\t|" << endl;
    cout << "| 49) IMPORTAR BANCO DE DADOS\t\t\t|" << endl;
    cout << "| 50) EXPORTAR BANCO DE DADOS\t\t\t|" << endl;
    cout << "| 51) VERIFICAR O STATUS LISTENER\t\t|" << endl;
    cout << "| 52) INICIAR O SERVICO LISTENER\t\t|" << endl;
    cout << "| 53) PARAR   O SERVICO LISTENER\t\t|" << endl;
    cout << "| 54) BLOQUEAR BANCO DE DADOS\t\t\t|" << endl;
    cout << "| 55) DESBLOQUEAR BANCO DE DADOS\t\t|" << endl;
    cout << "|\t\t\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    cout << "| V) VOLTAR\t\t\t\t\t|" << endl;
    cout << "| M) MENU PRINCIPAL\t\t\t\t|" << endl;
    cout << "| X) SAIR\t\t\t\t\t|" << endl;
    cout << "|===============================================|" << endl;
    setValor(getCodMenu());
    setCodigo(retornaCodigoMenu(getValor()));
    renderViewMenu(getCodigo());
}

void CMenu::renderViewMenu(int n) {
    switch (n) {
        case 1:
            modulo = fopen(financeiro, "r");
            if (modulo == true) {
                system(financeiro);
            } else
                cout << "Modulo Financeiro nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 2:
            modulo = fopen(almoxar, "r");
            if (modulo == true) {
                system(almoxar);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 3:
            modulo = fopen(sementes, "r");
            if (modulo == true) {
                system(sementes);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 4:
            modulo = fopen(graos, "r");
            if (modulo == true) {
                system(graos);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 5:
            modulo = fopen(compras, "r");
            if (modulo == true) {
                system(compras);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 6:
            modulo = fopen(fiscal, "r");
            if (modulo == true) {
                system(fiscal);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 7:
            modulo = fopen(algodao, "r");
            if (modulo == true) {
                system(algodao);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 8:
            modulo = fopen(patrimonio, "r");
            if (modulo == true) {
                system(patrimonio);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 9:
            modulo = fopen(puleriza, "r");
            if (modulo == true) {
                system(puleriza);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 10:
            modulo = fopen(sped, "r");
            if (modulo == true) {
                system(sped);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 11:
            modulo = fopen(nfe, "r");
            if (modulo == true) {
                system(nfe);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 12:
            modulo = fopen(siga, "r");
            if (modulo == true) {
                system(siga);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 13:
            modulo = fopen(transmissao, "r");
            if (modulo == true) {
                system(transmissao);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 14:
            modulo = fopen(sgl, "r");
            if (modulo == true) {
                system(sgl);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 15:
            modulo = fopen(transmite, "r");
            if (modulo == true) {
                system(transmite);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 16:
            modulo = fopen(recebe, "r");
            if (modulo == true) {
                system(recebe);
            } else
                cout << "Modulo almoxar nao encontrado, por favor faça o download do módulo no menu de instalacao"
                     << endl;
            showMenu();
            break;
        case 17:
            showMenuInstalarMosayco();
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
