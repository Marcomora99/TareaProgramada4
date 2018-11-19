#include "codificadorletras.h"

codificadorLetras::codificadorLetras()
{

}

void codificadorLetras::analizarArchivo(){
    
    QString fileName = QFileDialog::getSaveFileName(this,
            tr("Escoja la cancion"), "",
            tr("Text File (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }
        
    QString texto = file.readAll();
    QStringList palabras = texto.split(" ");
    for()
    
    
}
