#ifndef DEF_FENVUEFILM
#define DEF_FENVUEFILM

#include <QtGui>

#include "Film.h"
#include "FenEditFilm.h"

class FenVueFilm : public QDialog
{
	Q_OBJECT

public:
	FenVueFilm(Film p_film, QWidget *parent);
	
private slots:
	void s_editer();

private:
	QPushButton *lire;
	QPushButton *editer;
	QPushButton *fermer;

};

#endif