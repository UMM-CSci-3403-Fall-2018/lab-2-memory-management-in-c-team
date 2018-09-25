#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "disemvowel.h"

bool* isVowel(char lttr){
  if(lttr == 'a' || lttr == 'e' || lttr == 'i' || lttr == 'o' || lttr == 'u' || lttr == 'A' || lttr == 'E'|| lttr == 'I'|| lttr == 'O'|| lttr == 'U'){
    return (bool*)true;
  } else {
    return (bool*)false;
  }
}

char *disemvowel(char *str) {
  int size;
  int vowels, i, j;
  char *result;

  size = strlen(str);

  vowels = 0;
  for(i=0; i<size; i++) {
    if(isVowel(str[i])){
      ++vowels;
    }
  }
  
  if(vowels == 0){
    return str;
  }

  if(vowels >= size){
    return (char*) "";
  }

  result = (char*) calloc(size-vowels+1, sizeof(char));

  j=0;
  for(i=0; i<size; i++) {
    if(!isVowel(str[i])){
      result[j]=str[i];
      ++j;
    }
  }
  result[j]='\0';

  return result;
}
