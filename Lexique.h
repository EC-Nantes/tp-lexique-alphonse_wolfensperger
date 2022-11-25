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
  int getLenWords() { return words.size(); }
  map<string, int> getWordsMap() { return words; }

  // accesseurs en ecriture
  void setNom(string nom) { this->nom = nom; }
  void setWord(string word) { this->words[word]; }
  void setWordOcc(string word, int occurence) { this->words[word] = occurence; }
  void setWordIncOcc(string word) { this->words[word]+=1; }

  // constructeurs
  Lexique(void);
  Lexique(string nom, string path);

  //Méthodes


  void PrintWords();
};