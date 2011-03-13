#ifndef DEF_FENETRE
#define DEF_FENETRE

#include <QtGui>

#include <iostream>

#include "QFilm.h"
#include "Film.h"
#include "Filmotheque.h"

using namespace std;

class Fenetre : public QMainWindow
{
	Q_OBJECT
	
public:
	Fenetre();
	
private slots:
	void filmSelected(QListWidgetItem* p_item);
	
	
private:
	Filmotheque m_filmotheque;
	
};

#endif