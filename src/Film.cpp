#include "Film.h"

Film::Film()
{
	m_titre = "";
	m_dvd = false;
	m_fichier = "";
}

Film::Film(string p_titre, bool p_dvd, string p_fichier)
{
	m_titre = p_titre;
	m_dvd = p_dvd;
	m_fichier = p_fichier;
}

void Film::setTitre(string p_titre)
{
	m_titre = p_titre;
}

string Film::titre()
{
	return m_titre;
}

void Film::setDvd(bool p_dvd)
{
	m_dvd = p_dvd;
}

bool Film::dvd()
{
	return m_dvd;
}

void Film::setFichier(string p_fichier)
{
	m_fichier = p_fichier;
}

string Film::fichier()
{
	return m_fichier;
}

bool Film::operator<(const Film &p_film) const
{
    return m_titre < p_film.m_titre;
}

ostream &operator<<( ostream &out, Film &p_film )
{
    out << p_film.titre() << endl;
	if (p_film.dvd()) out << "dvd";
	else out << p_film.fichier();
    return out;
}

