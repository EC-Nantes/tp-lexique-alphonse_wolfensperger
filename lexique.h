#include <iostream>
#include <string.h>

using namespace std;

class Lexique {
private:
  string nom;  
  int occurence;

protected:

public:
  // accesseurs en lecture
  string getNom() {return nom;} 
  int getOccurence() {return occurence;} 

  // accesseurs en ecriture
  void setNom(int nom) {this->nom = nom;} 
  void setNom(int nom) {this->nom = nom;}


	void setPosition_y(int y) {this->position.setCoordx(y);} 
  void setPosition(int x, int y) {this->position.setCoord(x,y);}
	void setOrientation(int orientation) {this->orientation = orientation;}
	void setTaille(int taille) {this->taille = taille;}
  void setTabVie(int i, bool etat) {this->tabVie[i]=etat;}
  void initTabVie();
  void changeTabVie(int indice); //signaler une partie du bateau touchée
  void initVie() {this->vie = true;} //initialisation de la vie
  void changeVie() {this->vie = !this->vie;} //mort du bateau
  void setVie(bool vie) {this->vie = vie;}
  void setnom(string nom) {this->nom = nom;}

  void Init_taille_flotte(void);

  // constructeurs
  Bateau(void);
  Bateau(int taille, string nom);
  Bateau(int i);

  Coord balayageBateau(int i); //balayage du bateau en prennant en compte l'orientation
  bool verifPos_bateaux(Bateau bateau); //renvoie false si les deux bateaux ont des coordonnées communes
  bool verifVie(); //renvoie vrai si le bateau est encore en vie et verifie l'état de chaque case du bateau

  //void Init(string nom, int dim_x, int dim_y);

  //virtual bool Attaque()=0;//virtuelle pure
  //virtual void Init_plateau()=0;//virtuelle pure
};