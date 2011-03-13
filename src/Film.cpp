#include "Film.h"

Film::Film()
{
	m_titre = "";
	m_dvd = false;
	m_fichier = "";
	m_realisateur = "";
	m_annee = "";
	m_resume = "";
}

Film::Film(string p_titre, bool p_dvd, string p_fichier)
{
	m_titre = p_titre;
	m_dvd = p_dvd;
	m_fichier = p_fichier;
	m_realisateur = "";
	m_annee = "";
	m_resume = "";
}

Film::Film(string p_titre, bool p_dvd, string p_fichier, string p_realisateur, string p_annee, string p_resume)
{
	m_titre = p_titre;
	m_dvd = p_dvd;
	m_fichier = p_fichier;
	m_realisateur = p_realisateur;
	m_annee = p_annee;
	m_resume = p_resume;
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

void Film::setRealisateur(string p_realisateur)
{
	m_realisateur = p_realisateur;
}

string Film::realisateur()
{
	return m_realisateur;
}
	
void Film::setAnnee(string p_annee)
{
	m_annee = p_annee;
}

string Film::annee()
{
	return m_annee;
}
	
void Film::setResume(string p_resume)
{
	m_resume = p_resume;
}

string Film::resume()
{
	return m_resume;
}

bool Film::operator<(const Film &p_film) const
{
    return m_titre < p_film.m_titre;
}

ostream &operator<<( ostream &out, Film &p_film )
{
    out << p_film.titre() << endl;
	if (p_film.dvd()) out << "dvd" << endl;
	else out << p_film.fichier() << endl;
	out << p_film.realisateur() << endl;
	out << p_film.annee() << endl;
	out << p_film.resume();
    return out;
}

