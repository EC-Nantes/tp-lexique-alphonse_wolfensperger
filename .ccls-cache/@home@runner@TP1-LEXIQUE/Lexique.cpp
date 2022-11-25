#include <iostream>
#include <map>
#include "Lexique.h"
#include "utilitaire.hpp"
//#include "stdlib.h"
using namespace std;

Lexique::Lexique(string nom, string path){
  string str = "- This, a sample string.";
  readFileIntoString(path, str);
  toLower(str);

  char *pch;
  printf("Splitting string \"%s\" into tokens:\n", &str[0]);
  pch = strtok(&str[0], " ,.-");
  while (pch != NULL) {
    setWordIncOcc(pch);
    pch = strtok(NULL, " ,.-");
  }
}

void Lexique::PrintWords() {
  //const map<string, int>& m = getWordsMap();
  for (const auto &n : this->words) {
    std::cout << n.first << " = " << n.second << "; ";
  }
  std::cout << '\n';
}
