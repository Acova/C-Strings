#include "strings.h"
#include <string.h>
#include <stdlib.h>

char *initializeString(char *str){
  int len = strlen(str);
  char *res = malloc(sizeof(char *) * len);
  strcat(res, str);
  return res;
}

char *appendChar(char *str, char ch){
  int len = strlen(str);
  char *res = malloc((sizeof(char *) * len) + 2);
  strcat(res, str);
  res[len] = ch;
  res[len+1] = '\0';
  return res;
}

char *appendStr(char *str, char *src){
  int len = strlen(str) + strlen(src);
  char *res = malloc(sizeof(char*) * len);
  strcat(res, str);
  strcat(res, src);
  return res;
}
