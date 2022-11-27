#include "Lexique.h"
#include <iostream>
#include <map>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
  Lexique lex("Les Miserables", "tp1-Lexique-fichiers/lesMiserables_A.txt");
  lex.PrintWords();
  lex.Export();
  return 0;
}