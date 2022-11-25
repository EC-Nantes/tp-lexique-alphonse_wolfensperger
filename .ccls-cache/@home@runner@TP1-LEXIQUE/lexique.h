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
  void setOccurence(int occurence) {this->occurence = occurence;}

  // constructeurs
  Lexique(void);
  Lexique(string nom, int occurence);
  Lexique(string nom);

  //Coord balayageBateau(int i); //balayage du bateau en prennant en compte l'orientation
  //bool verifPos_bateaux(Bateau bateau); //renvoie false si les deux bateaux ont des coordonnées communes
  //bool verifVie(); //renvoie vrai si le bateau est encore en vie et verifie l'état de chaque case du bateau

  //void Init(string nom, int dim_x, int dim_y);

  //virtual bool Attaque()=0;//virtuelle pure
  //virtual void Init_plateau()=0;//virtuelle pure
};