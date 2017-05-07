//
// Created by Jean Freitas on 07/05/2017.
//
#ifndef MOSAYCO_INSTALL_CMENU_H
#define MOSAYCO_INSTALL_CMENU_H
using namespace std;
#include <iostream>
#include <cstdlib>
class CMenu {
public:
    int codigo;
    string valor;
    bool executar = true;
    void showMenu();

    string getCodMenu();

    void renderViewMenu(int n);

    void showMenuInstalarMosayco();
    void showMenuInstalarMosayco_Baixar();
    //void showMenuOpcoesWindows();
    //void showMenuOpcoesOracle();
    //void showMenuCentralTestes();
};
#endif //MOSAYCO_INSTALL_CMENU_H
