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
           texto << linea << " ";  //lee el archivo y le manda linea por linea al stringstream texto
        }
    }

    inFile.close();
    
    texto_str = texto.str(); //Transforma el stringstream a stream
    
    transform(texto_str.begin(), texto_str.end(), texto_str.begin(), ::tolower); // Hace todas las letras minusculas
    
    QString texto_qstr = QString::fromStdString(texto_str); // Crea un QString con la letra para poder trabajarla de una mejor manera
    
    texto_qstr = quitarSignosPuntuacion(texto_qstr); //Quita signos de puntuacion para no contar mas palabras de la cuenta
    
    QStringList arregloLetra = texto_qstr.split(" "); // Crea una lista con cada palabra de la cancion
    
    QStringList arregloLetraSinRepetidas = arregloLetra; // Crea otra lista con el objetivo de quitarle las palabras repetidas
    
    arregloLetraSinRepetidas.removeDuplicates(); // Quita de la lista las palabras repetidas para tener el total de las palabras que aparecen en la letra
    
    texto_qstr = arregloLetra.join(" ");  // Une la lista de todas las palabras en un solo QString para imprimirlo
    
    cout << texto_qstr.toStdString();
    
    cout << endl << endl;
    
    texto_qstr = arregloLetraSinRepetidas.join(" "); // Une la lista de todas las palabras sin repeticion en un solo QString para imprimirlo
    
    cout << texto_qstr.toStdString();

    //Analisis de las mas repetidas
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
