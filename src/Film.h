#ifndef DEF_FILM
#define DEF_FILM

#include <string>
#include <iostream>
#include <cctype>

using namespace std;

class Film
{
public:
	Film();
	Film(string p_titre, bool p_dvd, string p_fichier = "");
	Film(string p_titre, bool p_dvd, string p_fichier, string p_realisateur, int p_annee, int p_resume);
	
	void setTitre(string p_titre);
	string titre();
	
	void setDvd(bool p_dvd);
	bool dvd();
	
	void setFichier(string p_fichier);
	string fichier();
	
	void setRealisateur(string p_realisateur);
	string realisateur();
	
	void setAnnee(int p_annee);
	int annee();
	
	void setResume(string p_resume);
	string resume();

    bool operator<(const Film &p_film) const;
	
	
private:
	string m_titre;
	bool m_dvd;
	string m_fichier;
	string m_realisateur;
	int m_annee;
	string m_resume;
	
};

ostream &operator<<(ostream &out, Film &p_film);

#endif
