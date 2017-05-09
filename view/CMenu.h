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
    bool modulo;
    char financeiro[40] = "c:\\unisystem\\executaveis\\financeiro.exe";
    char almoxar[37] = "c:\\unisystem\\executaveis\\almoxar.exe";
    char sementes[38] = "c:\\unisystem\\executaveis\\sementes.exe";
    char graos[35] = "c:\\unisystem\\executaveis\\graos.exe";
    char compras[33] = "c:\\unisystem\\executaveis\\compras.exe";
    char fiscal[36] = "c:\\unisystem\\executaveis\\fiscal.exe";
    char algodao[36] = "c:\\unisystem\\executaveis\\algodao.exe";
    char patrimonio[36] = "c:\\unisystem\\executaveis\\patrimonio.exe";
    char puleriza[40] = "c:\\unisystem\\executaveis\\puleriza.exe";
    char sped[34] = "c:\\unisystem\\executaveis\\sped.exe";
    char nfe[33] = "c:\\unisystem\\executaveis\\nfe.exe";
    char siga[34] = "c:\\unisystem\\executaveis\\siga.exe";
    char transmissao[41] = "c:\\unisystem\\executaveis\\transmissao.exe";
    char sgl[33] = "c:\\unisystem\\executaveis\\sgl.exe";
    char transmite[39] = "c:\\unisystem\\executaveis\\transmite.exe";
    char recebe[36] = "c:\\unisystem\\executaveis\\recebe.exe";
public:
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
