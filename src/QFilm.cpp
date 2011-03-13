#include "QFilm.h"

QFilm::QFilm(const QString & text) : QListWidgetItem (text)
{

}

QFilm::QFilm(const QString & text, Film p_film) : QListWidgetItem (text)
{
	m_film = p_film;
}

void QFilm::setFilm(Film p_film)
{
	m_film = p_film;
}

Film QFilm::film()
{
	return m_film;
}