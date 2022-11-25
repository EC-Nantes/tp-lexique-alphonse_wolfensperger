#include "utilitaire.hpp"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
  void readFileIntoString(const std::string &path, std::string &content);
  char str[] = "- This, a sample string.";
  string *path1 = "tp1-Lexique-fichiers/lesMiserables_A.txt";
  readFileIntoString(&path1,  &str);

  char *pch;
  printf("Splitting string \"%s\" into tokens:\n", str);
  pch = strtok(str, " ,.-");
  while (pch != NULL) {
    printf("%s\n", pch);
    pch = strtok(NULL, " ,.-");
  }
  return 0;
}