#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "disemvowel.h"

bool* isVowel(char *str){
  if(str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u'
		  || str[0] == 'A' || str[0] == 'E'|| str[0] == 'I'|| str[0] == 'O'|| str[0] == 'U'){
    return (bool*)true;
  } else {
    return (bool*)false;
  }
}

char *disemvowel(char *str) {
  int size;
  int vowels, i;
  char *result;

  size = strlen(str);

  vowels = 0;
  for(i=0; i<size; i++) {
    if(str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u'
                  || str[0] == 'A' || str[0] == 'E'|| str[0] == 'I'|| str[0] == 'O'|| str[0] == 'U'){
      ++vowels;
    }
  }

  if(vowels >= size){
    return (char*) "";
  }

  result = (char*) calloc(size-vowels+1, sizeof(char));

  for(i=0; i<size; i++) {
    if(str[0] == 'a' || str[0] == 'e' || str[0] == 'i' || str[0] == 'o' || str[0] == 'u'
                  || str[0] == 'A' || str[0] == 'E'|| str[0] == 'I'|| str[0] == 'O'|| str[0] == 'U'){
      result[i]=str[i+vowels];
    }
  }

  return result;
}
