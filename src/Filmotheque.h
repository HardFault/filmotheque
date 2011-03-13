#ifndef DEF_FILMOTHEQUE
#define DEF_FILMOTHEQUE

#include <vector>
#include <algorithm>
#include <fstream>

#include "Film.h"

using namespace std;

class Filmotheque
{
public:
	Filmotheque();
	
	void push_back(Film);
	Film at(int i);
	int size();
	
	void trier();
	
	int sauvegarder(string p_fichier);
	int charger(string p_fichier);
	
private:
	vector<Film> m_filmotheque;
	
};

#endif