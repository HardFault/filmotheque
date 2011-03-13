#ifndef DEF_FENETRE
#define DEF_FENETRE

#include <QtGui>

#include <iostream>

#include "QFilm.h"
#include "Film.h"
#include "Filmotheque.h"
#include "FenVueFilm.h"
#include "FenEditFilm.h"

using namespace std;

class Fenetre : public QMainWindow
{
	Q_OBJECT
	
public:
	Fenetre();
	void closeEvent(QCloseEvent *event);
	
private slots:
	void filmSelected(QListWidgetItem* p_item);
	void ouvrir();
	
	
private:
	Filmotheque m_filmotheque;
	
};

#endif