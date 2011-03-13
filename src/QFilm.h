#ifndef DEF_QFILM
#define DEF_QFILM

#include <QListWidgetItem>

#include "Film.h"

using namespace std;

class QFilm : public QListWidgetItem
{
public:
	QFilm(const QString & text);
	QFilm(const QString & text, Film p_film);
	
	void setFilm(Film p_film);
	Film film();

private:
	Film m_film;
};

#endif