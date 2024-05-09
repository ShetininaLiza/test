#include <QtCore>
#include <QDialog>
#include <QApplication>

int main(int argc, char **argv [])
{
 QApplication app (argc, argv);
QDialog *dialog = new QDialog();
dialog->setText("111");
dialog->show();
 return app.exec();
}
