#include <iostream>
#include <map>
#include <string.h>

using namespace std;

class Lexique {
private:
  string nom;
  map<string, int> words;

protected:
public:
  // accesseurs en lecture
  string getNom() { return nom; }
  int getWordOcc(string word) { return words[word]; }

  // accesseurs en ecriture
  void setNom(string nom) { this->nom = nom; }
  void setWord(string word) { this->words[word]; }
  void setWordOcc(string word, int occurence) { this->words[word] = occurence; }
  void setWordIncOcc(string word) { this->words[word]+=1; }

  // constructeurs
  Lexique(void);
  Lexique(string nom, string path);

  // Coord balayageBateau(int i); //balayage du bateau en prennant en compte
  // l'orientation bool verifPos_bateaux(Bateau bateau); //renvoie false si les
  // deux bateaux ont des coordonnées communes bool verifVie(); //renvoie vrai si
  // le bateau est encore en vie et verifie l'état de chaque case du bateau

  // void Init(string nom, int dim_x, int dim_y);

  // virtual bool Attaque()=0;//virtuelle pure
  // virtual void Init_plateau()=0;//virtuelle pure
};