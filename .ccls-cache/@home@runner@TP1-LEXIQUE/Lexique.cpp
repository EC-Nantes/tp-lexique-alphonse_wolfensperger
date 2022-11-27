
#include "Lexique.h"
#include "utilitaire.hpp"
#include <algorithm>
#include <fstream> //temp
#include <iostream>
#include <map>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Lexique::Lexique(string nom, string path) {
  string str = "- This, a sample string.";
  readFileIntoString(path, str);
  toLower(str);
  remove_punctuation(str);
  str.erase(remove(str.begin(), str.end(), '\n'), str.cend());
  str.erase(remove(str.begin(), str.end(), '"'), str.cend());
  str.erase(remove(str.begin(), str.end(), ';'), str.cend());
  str.erase(remove(str.begin(), str.end(), '_'), str.cend());
  str.erase(remove(str.begin(), str.end(), '\''), str.cend());
  char *pch;
  string s;
  // printf("Splitting string \"%s\" into tokens:\n", &str[0]);
  pch = strtok(&str[0], " ?!,.-");

  while (pch != NULL) {
    s = *pch;
    setWordIncOcc(pch);
    // printf("%s \n", pch);
    pch = strtok(NULL, " ?!,.-");
  }
}

void Lexique::PrintWords() {
  for (const auto &n : this->words) {
    cout << n.first << " = " << n.second << "; " << '\n';
  }
  cout << '\n';
}

void Lexique::Export() {

  /*File *f;
  f = fopen("lexique.txt", "w");

  for (const auto &n : this->words) {
    std::cout << n.first << " = " << n.second << "; " << '\n';
  }
  std::cout << '\n';*/

  // Create and open a text file
  ofstream file("lexique.txt");

  // Write to the file
  // file << "Files can be tricky, but it is fun enough!";
  for (const auto &n : this->words) {
    file << n.first << " = " << n.second << ";" << endl;
  }

  // Close the file
  file.close();
}
