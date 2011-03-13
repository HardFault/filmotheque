#include "Fenetre.h"

Fenetre::Fenetre()
{
	m_filmotheque.charger(".filmotheque");
	
	// Création des menus
	QMenu* menuFichier = menuBar()->addMenu("&Fichier");
	QAction* actionOuvrir = menuFichier->addAction("&Ouvrir");
	actionOuvrir->setShortcut(QKeySequence("Ctrl+O"));
	actionOuvrir->setIcon(QIcon::fromTheme("document-open"));	// /usr/share/icons/oxygen/48x48/actions/
	actionOuvrir->setStatusTip("Ouvre un film");
	
	// Création de la barre d'outils
	QToolBar *toolBarFichier = addToolBar("Fichier");
	toolBarFichier->setMovable(false);
	toolBarFichier->addAction(actionOuvrir);
	
// 	QTreeView* treeView = new QTreeView();
// 	setCentralWidget(treeView);
	
	QListWidget* listWidget = new QListWidget();
	setCentralWidget(listWidget);
	
	for (int i = 0 ; i < m_filmotheque.size() ; i++)
	{
		listWidget->addItem(new QFilm(QString::fromStdString(m_filmotheque.at(i).titre()), m_filmotheque.at(i)));
	}
	
	connect(listWidget, SIGNAL(itemActivated(QListWidgetItem*)), this, SLOT(filmSelected(QListWidgetItem*)));
}

void Fenetre::filmSelected(QListWidgetItem* p_item)
{
	QFilm* qfilm = static_cast<QFilm*>(p_item);
	Film film = qfilm->film();
	cout << "Film sélectionné : " << film << endl;
}
