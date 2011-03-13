#include "FenEditFilm.h"

FenEditFilm::FenEditFilm(QWidget *parent = 0) : QDialog(parent)
{
	ok = new QPushButton("OK");
	annuler = new QPushButton("Annuler");

	QHBoxLayout *layoutBoutons = new QHBoxLayout;
	layoutBoutons->addWidget(ok);
	layoutBoutons->addWidget(annuler);
	
	QVBoxLayout *layoutPrincipal = new QVBoxLayout;
	layoutPrincipal->addLayout(layoutBoutons);

//	resize(350, 450);
	setLayout(layoutPrincipal);

	connect(ok, SIGNAL(clicked()), this, SLOT(accept()));
}
