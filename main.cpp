//#include "controller/CControllers.h"
#include "view/CMenu.h"

int main(int argc, char *argv[]) {
    CMenu menu;
    //CControllers controllers;
    //while (menu.executar == true) {
    menu.showMenu(); //@exibe o menu inicial
    menu.setValor(menu.getCodMenu());
    menu.setCodigo(menu.retornaCodigoMenu(menu.getValor()));
    menu.renderViewMenu(menu.getCodigo());
    //menu.valor = controllers.getCodMenu(); //@pergunta a opcao
    //menu.codigo = controllers.retornaCodigoMenu(menu.valor); //@converte a opcao digitada em um numero de menu
    //menu.renderViewMenu(menu.codigo); //@renderiza o menu escolhido pelo usuario
    //}
    return 0;
}