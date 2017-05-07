#include "controller/CControllers.h"
#include "view/CMenu.h"

int main(int argc, char *argv[]) {
    CMenu menu;
    CControllers controllers;
    menu.showMenu();
    menu.valor = controllers.getCodMenu();
    menu.codigo = controllers.retornaCodigoMenu(menu.valor);
    cout << " Valor e: " << menu.codigo << endl;
    system("pause");
    return 0;
}