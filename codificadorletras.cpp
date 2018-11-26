#include "codificadorletras.h"

codificadorLetras::codificadorLetras()
{

}

float codificadorLetras::analizarArchivo(string letra){
    /*fstream inFile;
    string linea;
    stringstream texto;
    inFile.open(nombreArchivo);

    if (!inFile) {
        cout << "Unable to open file datafile.txt";
    }else{
        while(getline (inFile,linea)) {
           texto << linea << " ";  //lee el archivo y le manda linea por linea al stringstream texto
        }
    }

    inFile.close();*/
    if(letra != ""){

        QString texto = QString::fromStdString(letra);

        texto.replace("\n"," ");

        string texto_str = texto.toStdString();

        transform(texto_str.begin(), texto_str.end(), texto_str.begin(), ::tolower); // Hace todas las letras minusculas

        QString texto_qstr = QString::fromStdString(texto_str); // Crea un QString con la letra para poder trabajarla de una mejor manera

        texto_qstr = quitarSignosPuntuacion(texto_qstr); //Quita signos de puntuacion para no contar mas palabras de la cuenta

        QStringList arregloLetra = texto_qstr.split(" "); // Crea una lista con cada palabra de la cancion

        QStringList arregloLetraSinRepetidas = arregloLetra; // Crea otra lista con el objetivo de quitarle las palabras repetidas

        arregloLetraSinRepetidas.removeDuplicates(); // Quita de la lista las palabras repetidas para tener el total de las palabras que aparecen en la letra

        for(int i = 0 ; i < arregloLetraSinRepetidas.size() ; i++){
            if(arregloLetraSinRepetidas.at(i).size() <= 2){
                arregloLetraSinRepetidas.removeAt(i);
            }
        }


        //Analisis de las mas repetidas
        //int repeticiones [arregloLetraSinRepetidas.size()] = {0};
        vector <int> repeticiones;

        for(int i = 0 ; i < arregloLetraSinRepetidas.size() ; i++){
            repeticiones.push_back(0);
        }

        for(int i=0 ; i < arregloLetraSinRepetidas.size(); i++){
            for(int j = 0; j < arregloLetra.size();j++){
                if(arregloLetraSinRepetidas.at(i)==arregloLetra.at(j)){
                    repeticiones[i]++;
                }
            }
        }

        vector <string> MasRepetidas10;


        for(int k = 0; k < 10 ; k++){
            int indicePalabraMasRepetida =0;
            int numeroVecesRepetidas=0;

            for (int i = 0 ; i < arregloLetraSinRepetidas.size();i++){
                if(repeticiones[i]> numeroVecesRepetidas){
                    numeroVecesRepetidas = repeticiones[i];
                    indicePalabraMasRepetida = i;
                }
            }

            repeticiones[indicePalabraMasRepetida] = 0;
            string palabraMasRepetida = arregloLetraSinRepetidas.at(indicePalabraMasRepetida).toStdString();
            MasRepetidas10.push_back(palabraMasRepetida);
        }

        vector<string> MasGrandes10;

        for(int k = 0; k < 10 ; k++){
            QString palabraMasGrande_Qstr = "";
            for (int i = 0 ; i < arregloLetraSinRepetidas.size();i++){
                if(palabraMasGrande_Qstr.size() < arregloLetraSinRepetidas.at(i).size()){
                    palabraMasGrande_Qstr = arregloLetraSinRepetidas.at(i);
                    arregloLetraSinRepetidas.removeAt(i);
                }
            }

            string palabraMasGrande = palabraMasGrande_Qstr.toStdString();
            MasGrandes10.push_back(palabraMasGrande);

        }

        vector <string> MasRelevantes10; // Palabras que se van a codificar para identificar la cancion, 5 mas respetidas y 5 mas grandes

        for(int i = 0; i < 5 ; i++){
            MasRelevantes10.push_back(MasRepetidas10[i]);
            MasRelevantes10.push_back(MasGrandes10[i]);
        }

        int cancionEntera = 0;


        for(int i = 0; i < MasRelevantes10.size() ; i++){
            for(int j = 0; j < MasRelevantes10[i].size() ; j++){
                cancionEntera += int(MasRelevantes10[i].at(j));
            }
        }

        QString cancionCodificada_qstr = "0."+ QString::number(cancionEntera);
        float cancionCodificada = cancionCodificada_qstr.toFloat();

        return cancionCodificada;
    }

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
