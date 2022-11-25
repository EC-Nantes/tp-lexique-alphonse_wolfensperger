#include <iostream>
//#include "stdlib.h"
using namespace std;

void Bateau::initTabVie() {
  this->tabVie.resize(getTaille());
  for(int i=0; i<(getTaille()); i++) {
    setTabVie(i,true);
  }
}

Bateau::Bateau(int taille, string nom) {
	setTaille(taille);
  initTabVie();
  initVie(); //initialisation de la vie
  setnom(nom);
}

Bateau::Bateau(int j) { //affectation des différents bateaux en fonction de l'indice d'entrée
  switch(j){
    case 0 : 
      Bateau(TAILLE_BAT1, BAT1);
      break;
    case 1 : 
      Bateau(TAILLE_BAT2, BAT2);
      break;
    case 2 : 
      Bateau(TAILLE_BAT3, BAT3);
      break;
    case 3 : 
      Bateau(TAILLE_BAT4, BAT4);
      break;
    case 4 : 
      Bateau(TAILLE_BAT4, BAT5);
      break;
  }
}