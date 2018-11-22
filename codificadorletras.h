#ifndef CODIFICADORLETRAS_H
#define CODIFICADORLETRAS_H

#include <vector>
#include <fstream>
#include <QtWidgets>
#include <iostream>
#include <sstream>
#include<bits/stdc++.h>

using namespace std;

class codificadorLetras
{
public:
    codificadorLetras();
    vector<string> v;
    float analizarArchivo(string nombreArchivo);
    QString quitarSignosPuntuacion(QString texto);
};

#endif // CODIFICADORLETRAS_H
