#include "view/CMenu.h"
#include "controller/CControllers.h"


int main(int argc, char *argv[]) {
    CMenu menu;
    CControllers controllers;
    menu.showMenu();
    string valor = controllers.getCodMenu();
    menu.codigo = controllers.retornaCodigoMenu(valor);
    cout << " Valor e: " << menu.codigo << endl;
    system("pause");
    return 0;
}