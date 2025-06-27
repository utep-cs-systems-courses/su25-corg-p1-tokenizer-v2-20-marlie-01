#include <stdio.h>
#include <stdlib.h>
#define _TOKENIZER_

int space_char(char c){
  return c == '\t' || c == ' ';
}

int non_space_char(char c){
  return c != '\0' && !space_char(c);
}

char *token_start(char *str){
  while (* str != '\0' && space_char(*str)){
    str++;
  }
  if (*str == '\0'){
    return NULL;
  }
  return str;
}

char *token_terminator(char *token){
  while (*token != '\0' && !space_char(*token)){
    token++;
  }
  return token;
}

int count_token(char *str){
  int counter = 0;
  char *token = token_start(str);

  while (token != NULL){
    counter++;

    token = token_terminator(token);
    token = token_start(token);
  }
  return counter;
}

char *copy_str(char *inStr, short len){
  char *string1 = (char *)malloc((len + 1)* sizeof(char *));
    for (int i = 0; i < len; i++){
      string1[i] = inStr[i];
    }

    string1[len] = '\0';

    return string1;
}

char **tokenize(char *str){

}

void print_tokens(char **tokens){
  
}

void free_tokens(char **tokens){

}
  
