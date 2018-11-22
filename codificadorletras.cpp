#include "codificadorletras.h"

codificadorLetras::codificadorLetras()
{

}

float codificadorLetras::analizarArchivo(string nombreArchivo){
    fstream inFile;
    string linea;
    stringstream texto;
    string texto_str;
    inFile.open(nombreArchivo);

    if (!inFile) {
        cout << "Unable to open file datafile.txt";
    }else{
        while(getline (inFile,linea)) {
           texto << linea << " ";
        }
    }

    inFile.close();
    texto_str = texto.str();
    transform(texto_str.begin(), texto_str.end(), texto_str.begin(), ::tolower);
    QString texto_qstr = QString::fromStdString(texto_str);
    texto_qstr = quitarSignosPuntuacion(texto_qstr);
    QStringList arregloLetra = texto_qstr.split(" ");
    QStringList arregloLetraSinRepetidas = arregloLetra;
    arregloLetraSinRepetidas.removeDuplicates();
    texto_qstr = arregloLetra.join(" ");
    cout << texto_qstr.toStdString();
    cout << endl << endl;
    texto_qstr = arregloLetraSinRepetidas.join(" ");
    cout << texto_qstr.toStdString();

    /*for(int i=0 ; i < arregloLetraSinRepetidas.size(); i++){
        for(int j = 0; j < arregloLetra.size();j++){
            if(arregloLetraSinRepetidas.at(i)==arregloLetra.at(j)){

            }
        }
    }*/

    return 0;
}

QString codificadorLetras::quitarSignosPuntuacion(QString texto){
    texto.remove(".");
    texto.remove(",");
    texto.remove("?");
    texto.remove("!");
    texto.remove("(");
    texto.remove(")");


    return texto;
}
