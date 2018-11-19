
#ifndef CODIFICADORLETRAS_H
#define CODIFICADORLETRAS_H

#include <vector>
#include <QString>
#include <QFile>
using namespace std;


class codificadorLetras
{
public:
    codificadorLetras();
    vector<string> v;
    void analizarArchivo();
};

#endif // CODIFICADORLETRAS_H
