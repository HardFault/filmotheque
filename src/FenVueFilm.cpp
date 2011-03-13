#include "FenVueFilm.h"

FenVueFilm::FenVueFilm(Film p_film, QWidget *parent = 0) : QDialog(parent)
{
	lire = new QPushButton("Lire");
	editer = new QPushButton("Editer");
	fermer = new QPushButton("Fermer");

	QHBoxLayout *layoutBoutons = new QHBoxLayout;
	layoutBoutons->addWidget(lire);
	layoutBoutons->addWidget(editer);
	layoutBoutons->addWidget(fermer);
	
	QVBoxLayout *layoutPrincipal = new QVBoxLayout;
	layoutPrincipal->addLayout(layoutBoutons);

//	resize(350, 450);
	setLayout(layoutPrincipal);

	connect(fermer, SIGNAL(clicked()), this, SLOT(accept()));
}
