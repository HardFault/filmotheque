#ifndef FENVUEFILM_DEF
#define FENVUEFILM_DEF

#include <QtGui>
#include "Film.h"

class FenVueFilm : public QDialog
{
public:
	FenVueFilm(Film p_film, QWidget *parent);

private:
	QPushButton *lire;
	QPushButton *editer;
	QPushButton *fermer;

};

#endif