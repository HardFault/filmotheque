#include <QApplication>
#include <QTextCodec>
#include <QtGui>

#include <string>
#include <iostream>

#include "Fenetre.h"
#include "Film.h"
#include "Filmotheque.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
  
  Fenetre fenetre;
//  fenetre.setWindowIcon(QIcon("data/logo.png"));

  fenetre.setWindowTitle("filmotheque");
  fenetre.show();

  return app.exec();
}