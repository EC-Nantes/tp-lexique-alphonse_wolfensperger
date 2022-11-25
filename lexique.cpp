
class Lexique {
private:
  

protected:
  string nom;
  //Bateau porte_avion,croiseur,contre_torpilleur1,contre_torpilleur2,torpilleur;
public:
  // accesseurs en lecture
  int getPosition_x() {return position.getCoordx();} 
	int getPosition_y() {return position.getCoordy();}
  Coord getPosition() {return position;}
	int getOrientation() {return orientation;}
	int getTaille() {return taille;}
  bool getTabVie(int i) {return tabVie[i];}
  //vector<bool> getTabVie() {return tabVie;}
  bool getVie() {return vie;}
  string getnom()  {return nom;}

  // accesseurs en ecriture
  void setPosition_x(int x) {this->position.setCoordx(x);} 
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