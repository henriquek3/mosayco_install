//
// Created by henri on 10/05/2017.
//

#ifndef MOSAYCO_INSTALL_CEXPORTUSERS_H
#define MOSAYCO_INSTALL_CEXPORTUSERS_H

#include <string>

using namespace std;

class CExportUsers {
private:
    string users;
    string servidor;
    string alias;
    string diretorios;
    string path = "C:\\Unisystem\\Backup\\";
public:
    string setUsers(string user);

    void setServidor(string servidor);

    void setAlias(string alias);

    void makeDiretorio();

    void exportDump();

};


#endif //MOSAYCO_INSTALL_CEXPORTUSERS_H
