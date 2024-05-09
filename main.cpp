#include <QtCore>
#include <QApplication>
#include <QDebug>

int main(int argc, char **argv [])
{
 QApplication app (argc, argv);
 qDebug()<<"START PROGRAM";  
 return app.exec();
}
