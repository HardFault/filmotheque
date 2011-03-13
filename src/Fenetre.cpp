#include "Fenetre.h"

Fenetre::Fenetre()
{
	resize(640, 480);
	m_filmotheque.charger(".filmotheque");
	
	// Création des menus
	QMenu* menuFichier = menuBar()->addMenu("&Fichier");
	QAction* actionNouveau = menuFichier->addAction("&Nouveau");
	actionNouveau->setShortcut(QKeySequence("Ctrl+N"));
	actionNouveau->setIcon(QIcon::fromTheme("document-new"));	// /usr/share/icons/oxygen/48x48/actions/
	actionNouveau->setStatusTip("Créer un nouveau film");
	
	// Création de la barre d'outils
	QToolBar *toolBarFichier = addToolBar("Fichier");
	toolBarFichier->setMovable(false);
	toolBarFichier->addAction(actionNouveau);
	
// 	QTreeView* treeView = new QTreeView();
// 	setCentralWidget(treeView);
	
	QListWidget* listWidget = new QListWidget();
	setCentralWidget(listWidget);
	
	for (int i = 0 ; i < m_filmotheque.size() ; i++)
	{
		listWidget->addItem(new QFilm(QString::fromStdString(m_filmotheque.at(i).titre()), m_filmotheque.at(i)));
	}
	
	connect(listWidget, SIGNAL(itemActivated(QListWidgetItem*)), this, SLOT(filmSelected(QListWidgetItem*)));
	connect(actionNouveau, SIGNAL(triggered()), this, SLOT(ouvrir()));
}

void Fenetre::filmSelected(QListWidgetItem* p_item)
{
	QFilm* qfilm = static_cast<QFilm*>(p_item);
	Film film = qfilm->film();
	cout << "Film sélectionné : " << film << endl;
	FenVueFilm* fenVueFilm = new FenVueFilm(film, this);
	fenVueFilm->setWindowTitle(QString::fromStdString(film.titre()));
    fenVueFilm->exec();
}

void Fenetre::ouvrir()
{
	FenEditFilm* fenEditFilm = new FenEditFilm(this);
	fenEditFilm->setWindowTitle("Nouveau");
	fenEditFilm->exec();
}

void Fenetre::closeEvent(QCloseEvent *event)
{
	m_filmotheque.sauvegarder(".filmotheque2");
}