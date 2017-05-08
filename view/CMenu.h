//
// Created by Jean Freitas on 07/05/2017.
//
#ifndef MOSAYCO_INSTALL_CMENU_H
#define MOSAYCO_INSTALL_CMENU_H

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class CMenu {
private:
    int codigo;
    string valor;
public:
    bool executar = true;
    void showMenu();

    string getCodMenu();
    void renderViewMenu(int n);

    int retornaCodigoMenu(string arg);

    void setCodigo(int codigo);

    int getCodigo();

    void setValor(string valor);

    string getValor();


    void showMenuInstalarMosayco();
    void showMenuInstalarMosayco_Baixar();
    //void showMenuOpcoesWindows();
    //void showMenuOpcoesOracle();
    //void showMenuCentralTestes();
};
#endif //MOSAYCO_INSTALL_CMENU_H
