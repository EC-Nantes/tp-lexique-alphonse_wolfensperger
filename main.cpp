#include <iostream>
#include <stdio.h>
#include <string.h>
#include "utilitaire.hpp"
using namespace std;


int main() {
  // void readFileIntoString(const std::string &path, std::string &content);
  // char str[] = "- This, a sample string.";
  string str = "- This, a sample string.";
  // const string *ptr = str;
  // char path1[] = "tp1-Lexique-fichiers/lesMiserables_A.txt";
  string path1 = "tp1-Lexique-fichiers/lesMiserables_A.txt";
  // const string *path_ptr = path1;
  readFileIntoString(path1, str);

  char *pch;
  printf("Splitting string \"%s\" into tokens:\n", &str[0]);
  pch = strtok(&str[0], " ,.-");
  while (pch != NULL) {
    printf("%s\n", pch);
    pch = strtok(NULL, " ,.-");
  }
  return 0;
}