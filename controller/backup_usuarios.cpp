#include <iostream>
#include <cstdlib>

using namespace std;

int backup_usuarios_definidos() {
    string usuarios[28] = {"MTAGRO", "UNISYSTEM", "DEMONSTRACAO", "SGL0001", "SCOTTON", "OGG0604", "CFROTA", "LEITURA",
                           "PROSEMENTE", "SAMA0905", "GUIMARAESFIN", "NBDMFISCAL", "TERADA", "FIBRACOTTON",
                           "SOCIEDADENEW", "WRANGELINA", "ARITANA1407", "GUERREIROJUNIOR", "FERMAP", "DESTEFANO",
                           "MAXIMA", "VALEREAL", "NSA", "GR2016", "FAZMATAO", "JTROJAN", "PONTEALTA", "BDM_FISCAL"};
    string diretorios[28];
    string path[28];
    for (int i = 0; i < 28; ++i) {
        diretorios[i] = "mkdir c:\\unisystem\\backup\\" + usuarios[i];
        path[i] = "c:\\unisystem\\backup\\" + usuarios[i];
        system((diretorios[i]).c_str());
        system(("exp system/0000d121c554@10.1.1.9/orcl01 owner=" + usuarios[i] + " file=" + path[i] + "\\" +
                usuarios[i] + ".dmp log=" + path[i] + "\\" + usuarios[i] + ".log compress=n").c_str());
    }
    cout << "O processo de backup terminou!" << endl;
    system("pause");
    return 0;
}

