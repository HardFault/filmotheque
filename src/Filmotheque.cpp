#include "Filmotheque.h"

Filmotheque::Filmotheque()
{
	
}

void Filmotheque::push_back(Film p_film)
{
	m_filmotheque.push_back(p_film);
}

Film Filmotheque::at(int i)
{
	return m_filmotheque.at(i);
}

int Filmotheque::size()
{
	return m_filmotheque.size();
}

void Filmotheque::trier()
{
	sort(m_filmotheque.begin(), m_filmotheque.end());
}

int Filmotheque::sauvegarder(string p_fichier)
{
	ofstream fichier(p_fichier.c_str(), ios::out | ios::trunc);  //déclaration du flux et ouverture du fichier

	if(fichier)  // si l'ouverture a réussi
	{
		for (unsigned int i = 0 ; i < m_filmotheque.size() ; i++)
		{
			fichier << m_filmotheque.at(i) << endl;
//			fichier << "**" << endl;
		}
		fichier.close();  // on referme le fichier
		return 0;
	}
	else  // sinon
	{
		cerr << "Erreur à l'ouverture !" << endl;
		return -1;
	}
}

int Filmotheque::charger(string p_fichier)
{
	ifstream fichier(p_fichier.c_str(), ios::in);  // on ouvre le fichier en lecture
	
	if(fichier)  // si l'ouverture a réussi
	{       
		string ligne;
		int compteur = 0;
		
		string m_titre;
		bool m_dvd = false;
		string m_fichier = "";
		
        while ( getline( fichier, ligne ) )
        {
			switch (compteur)
			{
				case 0:
					m_titre = ligne;
					break;
				case 1:
					if (ligne == "dvd") m_dvd = true;
					else 
					{
						m_dvd = false;
						m_fichier = ligne;
						
					}
					Film film(m_titre, m_dvd, m_fichier);
					m_filmotheque.push_back(film);
					compteur = -1;
					break;
			}
			compteur ++;
        }

		fichier.close();  // on ferme le fichier
		return 0;
	}
	else  // sinon
	{
		cerr << "Impossible d'ouvrir le fichier !" << endl;
		return -1;
	}
}