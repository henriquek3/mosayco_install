//
// Created by henri on 10/05/2017.
//

#include <io.h>
#include "CExportUsers.h"

void CExportUsers::setServidor(string servidor) { this->servidor = servidor; }

void CExportUsers::setAlias(string alias) { this->alias = alias; }

void CExportUsers::makeDiretorio() {
    this->diretorios = this->path + this->alias;
    mkdir((this->diretorios).c_str());
}