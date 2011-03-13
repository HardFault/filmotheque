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
	
	void setTitre(string p_titre);
	string titre();
	
	void setDvd(bool p_dvd);
	bool dvd();
	
	void setFichier(string p_fichier);
	string fichier();

    bool operator<(const Film &p_film) const;
	
	
private:
	string m_titre;
	bool m_dvd;
	string m_fichier;
	
};

ostream &operator<<(ostream &out, Film &p_film);

#endif
