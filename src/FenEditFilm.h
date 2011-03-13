#ifndef DEF_FENEDITFILM
#define DEF_FENEDITFILM

#include <QtGui>
#include "Film.h"

class FenEditFilm : public QDialog
{
public:
	FenEditFilm(QWidget *parent);

private:
	QPushButton *ok;
	QPushButton *annuler;

};

#endif