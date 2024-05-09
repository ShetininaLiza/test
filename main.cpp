#include <QtCore>
#include <QDialog>
#include <QApplication>
#include <QDebug>

int main(int argc, char **argv [])
{
 QApplication app (argc, argv);
  qDebug()<<"START PROGRAM";
QDialog *dialog = new QDialog();
dialog->setText("111");
dialog->show();  
 return app.exec();
}
