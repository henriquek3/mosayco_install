//
// Created by Jean Freitas on 07/05/2017.
//
#ifndef MOSAYCO_INSTALL_CCONTROLLERS_H
#define MOSAYCO_INSTALL_CCONTROLLERS_H
using namespace std;
#include <iostream>
#include <cstdlib>
#include <cstdio>

class CControllers {
public:
    int retornaCodigoMenu(string arg);
    void renderViewMenu(int n);
    string getCodMenu();
};


#endif //MOSAYCO_INSTALL_CCONTROLLERS_H
