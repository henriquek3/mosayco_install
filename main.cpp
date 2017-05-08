#include "view/CMenu.h"

int main(int argc, char *argv[]) {

    CMenu menu;
    menu.showMenu(); // @todo exibe o menu inicial
    menu.setValor(menu.getCodMenu()); // @todo pergunta a opcao e salva na variavel valor
    menu.setCodigo(
            menu.retornaCodigoMenu(menu.getValor())); //@todo obtem valor e repassa para retornar o codigo do menu
    menu.renderViewMenu(menu.getCodigo()); // @todo passa o codigo para a funcao que renderiza os menus
    return 0;
}