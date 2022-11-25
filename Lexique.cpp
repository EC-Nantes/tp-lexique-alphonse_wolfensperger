
#include <iostream>
#include <map>
#include <algorithm>
#include "utilitaire.hpp"
#include "Lexique.h"
//#include "stdlib.h"
using namespace std;

Lexique::Lexique(string nom, string path) {
  string str = "- This, a sample string.";
  readFileIntoString(path, str);
  toLower(str);
  remove_punctuation(str);
  str.erase(remove(str.begin(), str.end(), '\n'), str.cend());
  str.erase(remove(str.begin(), str.end(), '"'), str.cend());
  str.erase(remove(str.begin(), str.end(), ';'), str.cend());
  char *pch;
  string s;
  // printf("Splitting string \"%s\" into tokens:\n", &str[0]);
  pch = strtok(&str[0], " ?!,.-");
  
  while (pch != NULL) {
    s = *pch;
    setWordIncOcc(pch);
    //printf("%s \n", pch);
    pch = strtok(NULL, " ?!,.-");
  }
}

void Lexique::PrintWords() {
  // const map<string, int>& m = getWordsMap();
  for (const auto &n : this->words) {
    std::cout << n.first << " = " << n.second << "; " << '\n';
  }
  std::cout << '\n';
}
